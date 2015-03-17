    #include<stdio.h>
    #define SIZE 100
    #define digit(a) ((a>='0')&&(a<='9'))
     
    double numStack[SIZE],x=1,y=1;
    int num_top=0,char_top=0;
    char operatorStack[SIZE];
     
    void numPush(double num);
    double numTop();
    double numPop();
    void charPush(char ch);
    char charTop();
    char charPop();
    int InsideStackPriority(char operator);
    int OutsideStackPriority(char operator);
    void Execute(char operator);
    double power(double num, int index);
    double evaluate();
     
    int main()
    {
            double result;
            result=evaluate();
            printf("value of x is %lf, value of y is %lf\nvalue of the expression is %lf\n",x,y,result);
            return 0;
    }
     
    double evaluate()
    {
            char c,ch=getchar(),operator,str[10];
            double num,result;
            int count,tnum;
            while(ch!='\n')
            {
                    tnum=0;
                    if(digit(ch))
                    {
                            while(digit(ch))
                            {
                                    tnum=tnum*10+ch-'0';
                                    ch=getchar();
                            }
                            numPush((double)tnum);
                    }
                    if(ch=='x' || ch=='y')
                    {
                            c=ch;
                            ch=getchar();
                            if(ch=='=')
                            {
                                    if(c=='x')
                                            numPush(1);
                                    else
                                            numPush(2);
                            }
                            else
                            {
                                    if(c=='x')
                                            numPush(x);
                                    else
                                            numPush(y);
                            }
                    }
                    if(ch==')')
                    {
                            while(charTop()!='(')
                            {
                                    operator=charPop();
                                    Execute(operator);
                            }
                            operator=charPop();
                            ch=getchar();
                    }
                    else
                    {
                            while(InsideStackPriority(charTop())>=OutsideStackPriority(ch))
                            {
                                    operator=charPop();
                                    Execute(operator);
                            }
                            if(ch!='\n')
                            {
                                    charPush(ch);
                                    ch=getchar();
                            }
                    }
                    if(ch=='\n')
                    {
                            while(!isEmptyCharStack())
                            {
                                    operator=charPop();
                                    Execute(operator);
                            }
                    }
     
            }
            result=numPop();
            return result;
    }
     
    int InsideStackPriority(char operator)
    {
            if(isEmptyCharStack())
                    return -10;
            switch(operator)
            {
                    case '+':return 1;
                    case '-':return 1;
                    case '*':return 2;
                    case '/':return 2;
                    case '^':return 3;
                    case '(':return 0;
                    case '=':return -1;
            }
    }
     
    int OutsideStackPriority(char operator)
    {
            if(operator=='\n')
                    return -5;
            switch(operator)
            {
                    case '+':return 1;
                    case '-':return 1;
                    case '*':return 2;
                    case '/':return 2;
                    case '^':return 4;
                    case '(':return 5;
                    case '=':return 6;
            }
    }
     
    void numPush(double num)
    {
            numStack[num_top++]=num;
    }
     
    double numPop()
    {
            return numStack[--num_top];
    }
     
    double numTop()
    {
            return numStack[num_top-1];
    }
     
    int isEmptyCharStack()
    {
            return char_top==0;
    }
     
    void charPush(char ch)
    {
            operatorStack[char_top++]=ch;
    }
     
    char charPop()
    {
            return operatorStack[--char_top];
    }
     
    char charTop()
    {
            return operatorStack[char_top-1];
    }
     
    void Execute(char operator)
    {
            double result,temp1,temp2;
            temp1=numPop();
            temp2=numPop();
            switch(operator)
            {
                    case '+':result=temp1+temp2;break;
                    case '-':result=temp2-temp1;break;
                    case '*':result=temp1*temp2;break;
                    case '/':result=temp2/temp1;break;
                    case '^':result=power(temp2,temp1);break;
                    case '=':
                            result=temp1;
                            if(temp2==1)
                                    x=temp1;
                            else
                                    y=temp1;
                            break;
            }
            numPush(result);
    }
     
    double power(double num,int index)
    {
            if(index==0)
                    return 1;
            else
            {
                    if(index%2==0)
                            return power(num*num,index/2);
                    else
                            return num*power(num,index-1);
            }
    }

