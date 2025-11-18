int main () {
int n;
printf("Enter percentage");
scanf("%d",&n);
if (n>80)
printf("A grade");
else if (n>60)
printf("B grade");
else if (n>40)
printf("C grade");
else if (n>20)
printf("Fail");
return 0;
}