#include <stdio.h>
#include <stdbool.h>

int main()
{
    int y;
    scanf("%d", &y);

    for(int i=y+1;   ; i++)
    {
        int j=i;
        int freq[10]={0};
        bool repeat=false;
        while(j>0)
        {
            int digit=j%10;
            j=j/10;
            freq[digit]++;

            if(freq[digit]>=2)
            {
                repeat=true;
            }
        }
        if(!repeat)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
