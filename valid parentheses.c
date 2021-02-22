bool isValid(char * s){
    char *stack = malloc(strlen(s));
    int top = 0;
    int i;
    char a,b;
    
    for (i = 0; i < strlen(s); i++) {
        a = s[i];
        if (a == ')') {
            if (top == 0)
                return false;
            b = stack[--top];
            if (b != '(')
                return false;
        } else if (a == '}') {
            if (top == 0)
                return false;
            b = stack[--top];
            if (b != '{')
                return false;
        } else if (a == ']') {
            if (top == 0)
                return false;
            b = stack[--top];
            if (b != '[')
                return false;
        } else {
            stack[top++] = a;
        }
    }
    
    return top == 0;
}bool isValid(char * s){
    char *stack = malloc(strlen(s));
    int top = 0;
    int i;
    char a,b;
    
    for (i = 0; i < strlen(s); i++) {
        a = s[i];
        if (a == ')') {
            if (top == 0)
                return false;
            b = stack[--top];
            if (b != '(')
                return false;
        } else if (a == '}') {
            if (top == 0)
                return false;
            b = stack[--top];
            if (b != '{')
                return false;
        } else if (a == ']') {
            if (top == 0)
                return false;
            b = stack[--top];
            if (b != '[')
                return false;
        } else {
            stack[top++] = a;
        }
    }
    
    return top == 0;
}