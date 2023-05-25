float stepen(float a, int n){
int i,m;
float p=1;
if(n>=0){
m=n;
}
else{
m=-n;  
}
for(i=1;i<=m;i++){
p=p*a;
}
if(n<0){
    p=1/p;
}
return p;
}