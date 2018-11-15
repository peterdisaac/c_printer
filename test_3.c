int main()
{
  int i,j;
   for (i = 1;i <= 24;i++)
     {
       char fruit;
       printf("Which one is your favourite baseball team:\n");
       printf("a) Angels\n");
       printf("b) Brewers\n");
       printf("c) Cardinals\n");
       scanf("%c",&fruit);
       switch (fruit)
       {
          case 'a':
             printf("You like the Angels\n");
             break;
          case 'b':
             printf("You like Brewers\n");
             break;
          case 'c':
             printf("You like Cardinals\n");
             break;
          default:
             printf("You entered an invalid choice\n");
       }
     }
   return 0;
}
