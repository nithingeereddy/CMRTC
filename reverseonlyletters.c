int main()
{
int headPtr, tailPtr;
char swap;
char S[50];
gets(S);
headPtr = 0;
tailPtr = strlen(S)-1;
while (headPtr<tailPtr) {
    if (!isalpha(S[headPtr])) headPtr++;
      else if (!isalpha(S[tailPtr])) tailPtr--;
             else {
                 swap = S[headPtr];
                 S[headPtr++] = S[tailPtr];
                 S[tailPtr--] = swap;
             }
    }
return 0;
}