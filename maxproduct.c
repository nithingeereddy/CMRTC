int maxProduct(int* nums, int s){
int i,j,max=nums[0],sum;
    for(i=0;i<s;i++)
    {
        sum=nums[i];
        printf("%d\n",sum);
        if(sum>=max)
            max=sum;
        for(j=i+1;j<s;j++)
        {
            sum*=nums[j];
          if(sum>=max)
              max=sum;
    }
    }
        return max;
    }