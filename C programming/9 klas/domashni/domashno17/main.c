/*
Направете програма - електронна библиотека, която да запазва данните за книгите след излизане от програмата. 
Програмата, трябва да пази информация за името на книгата (името не съдържа празни интервали), нейния автор, жанр и година на издаване и ISBN номер. 
Когато се стартира програмата тя трябва да прочита файл със записи на книги и да извлича данните от него. 
Програмата трябва да предоставя възможност за въвеждане на нова книга, показване на всички книги и данните за тях, изтриване на книга по ISBN по номер, 
запазване на въведените записи във файл и изход от програмата. За да реализирате програмата създайте структура Book, която пази данните за книгата. 
Списъка с книги го пазете в динамичен масив или в свързан списък. 
За да запазите информацията, в текстовия файл, записвайте данните на книгите на отделни редове (Всеки ред да пази данните за една книга).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    char name[50];
    char author[50];
    char genre[50];
    int year;
    char isbn[13];
    struct Book* next;
} Book;

Book* load_books(char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return NULL;
    }

    Book* head = NULL;
    Book* last = NULL;

    while (!feof(file)) {
        Book* book = malloc(sizeof(Book));
        fscanf(file, "%[^,],%[^,],%[^,],%d,%s\n", book->name, book->author, book->genre, &book->year, book->isbn);
        book->next = NULL;

        if (head == NULL) {
            head = book;
        } else {
            last->next = book;
        }

        last = book;
    }

    fclose(file);
    return head;
}

void add_book(Book** head, char* name, char* author, char* genre, int year, char* isbn) {
    Book* book = malloc(sizeof(Book));
    strcpy(book->name, name);
    strcpy(book->author, author);
    strcpy(book->genre, genre);
    book->year = year;
    strcpy(book->isbn, isbn);
    book->next = *head;
    *head = book;
}

void show_books(Book* head) {
    Book* current = head;
    while (current != NULL) {
        printf("%s, %s, %s, %d, %s\n", current->name, current->author, current->genre, current->year, current->isbn);
        current = current->next;
    }
}

void delete_book(Book** head, char* isbn) {
    Book* current = *head;
    Book* previous = NULL;

    while (current != NULL) {
        if (strcmp(current->isbn, isbn) == 0) {
            if (previous == NULL) {
                *head = current->next;
            } else {
                previous->next = current->next;
            }

            free(current);
            return;
        }

        previous = current;
        current = current->next;
    }
}

void save_books(Book* head, char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        return;
    }

    Book* current = head;
    while (current != NULL) {
        fprintf(file, "%s,%s,%s,%d,%s\n", current->name, current->author, current->genre, current->year, current->isbn);
        current = current->next;
    }

    fclose(file);
}

int main(){
    Book* books = load_books("books.txt");

    char command[50];
    while (1) {
        printf("Enter command (add, show, delete, save, exit): ");
        scanf("%s", command);

        if (strcmp(command, "add") == 0) {
            char name[50];
            char author[50];
            char genre[50];
            int year;
            char isbn[13];
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter author: ");
            scanf("%s", author);
            printf("Enter genre: ");
            scanf("%s", genre);
            printf("Enter year: ");
            scanf("%d", &year);
            printf("Enter isbn: ");
            scanf("%s", isbn);
            add_book(&books, name, author, genre, year, isbn);
        } else if (strcmp(command, "show") == 0) {
            show_books(books);
        } else if (strcmp(command, "delete") == 0) {
            char isbn[13];
            printf("Enter isbn: ");
            scanf("%s", isbn);
            delete_book(&books, isbn);
        } else if (strcmp(command, "save") == 0) {
            save_books(books, "books.txt");
        } else if (strcmp(command, "exit") == 0) {
            break;
        } else {
            printf("Invalid command. Please try again.\n");
        }
    }

    return 0;
}