void fizz_buzz()
{
    int i;
    for(i=1; i<=100; i++)
    {
        if(i%3==0){
            if(i%5==0){
                printf("FizzBuzz ");
            }else{
                printf("Fizz ");
            }
        }else if(i%5==0){
            printf("Buzz ");
        }else{
            printf("%i", i);
        }
        printf(" ");
    }
    printf("\n");
}
