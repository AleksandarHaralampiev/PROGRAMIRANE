#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
    struct {
        int hour;
        int minute;
    } time;
} Date;

typedef struct {
    char first_name[50];
    char last_name[50];
    char middle_name[50];
    char email[100];
    char phone_number[20];
} Participant;

typedef struct {
    Participant participant;
    int will_participate;
} Response;

typedef struct {
    char title[100];
    char description[500];
    Date date;
    Response participants[100];
    int num_participants;
} Cause;

void printCause(Cause cause) {
    printf("Title: %s\n", cause.title);
    printf("Description: %s\n", cause.description);
    printf("Date: %d/%d/%d %d:%d\n", cause.date.day, cause.date.month, cause.date.year, cause.date.time.hour, cause.date.time.minute);
    printf("Participants:\n");
    for (int i = 0; i < cause.num_participants; i++) {
        printf("Participant %d:\n", i+1);
        printf("First Name: %s\n", cause.participants[i].participant.first_name);
        printf("Last Name: %s\n", cause.participants[i].participant.last_name);
        printf("Middle Name: %s\n", cause.participants[i].participant.middle_name);
        printf("Email: %s\n", cause.participants[i].participant.email);
        printf("Phone Number: %s\n", cause.participants[i].participant.phone_number);
        printf("Will Participate: %s\n", cause.participants[i].will_participate ? "Yes" : "No");
    }
    printf("\n");
}

int main() {
    Cause cause1 = {
        .title = "Cause 1",
        .description = "Description for Cause 1",
        .date = {
            .day = 1,
            .month = 1,
            .year = 2022,
            .time = {
                .hour = 10,
                .minute = 30
            }
        },
        .participants = {
            {
                .participant = {
                    .first_name = "Aleksandar",
                    .last_name = "Haralampiev",
                    .middle_name = "Hari",
                    .email = "1@gmail.com",
                    .phone_number = "0879912456"
                },
                .will_participate = 1
            },
            {
                .participant = {
                    .first_name = "Daniel",
                    .last_name = "Lazarov",
                    .middle_name = "Radoslavov",
                    .email = "2@gmail.com",
                    .phone_number = "0887653377"
                },
                .will_participate = 0
            }
        },
        .num_participants = 2
    };

    Cause cause2 = {
        .title = "Cause 2",
        .description = "Description for Cause 2",
        .date = {
            .day = 2,
            .month = 2,
            .year = 2022,
            .time = {
                .hour = 15,
                .minute = 45
            }
        },
        .participants = {
            {
                .participant = {
                    .first_name = "Dimitar",
                    .last_name = "Anastasov",
                    .middle_name = "Georgiev",
                    .email = "3@gmail.com",
                    .phone_number = "1111111111"
                },
                .will_participate = 1
            },
            {
                .participant = {
                    .first_name = "Martin",
                    .last_name = "Velchev",
                    .middle_name = "Veselinov",
                    .email = "4@gmail.com",
                    .phone_number = "0887548936"
                },
                .will_participate = 1
            }
        },
        .num_participants = 2
    };

    printCause(cause1);
    printCause(cause2);

    return 0;
}