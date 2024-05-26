float DivisionOption(float a, float b){
    int result = a/b;
    return result;
}
float MultOption (float a, float b){
    int result = a*b;
    return result;
}
float AddOption (float a, float b){
    int result = a+b;
    return result;
}
float SubOption (float a, float b){
    int result = a-b;
    return result;
}
int main (){
    float a;
    float b;
    char operand[50];
    printf( "Print operation you want (a-operand-b) ");
    scanf("%f %s %f", &a, &b, operand);
     if (strlen(operand) == 1) {
        char ch = operand[0];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            if (ch == '+'){
                return a+b; // It's an operator
            }
            else if (ch == '-'){
                return a-b;
            }
            else if (ch == '*'){
                return a*b;
            }
            else if (ch == '/'){
                return a/b;
            }
            else{
                printf("error");
            }
        }
    }

}