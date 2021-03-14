

int isalpha(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    else 
        return 0;
}


int isdigit(char c)
{
    if(c => '0' && c <= '9')
        return 1;
    else 
        return 0;    

}

int isalnum(char c)
{
    if(isnum(c) || isaplha(c))
        return 1;
    else 
        return 0;   


}

int iscntrl(char c)
{
    switch(c)
    {
        case '\\0':
        case '\\a':
        case '\\b':
        case '\\t':
        case '\\n':
        case '\\v':
        case '\\f':
        case '\\r':
        case -1:
            return 1;
            break;

        default:
            return 0;  
            break;
    }

    return 0; 
}

int ispunct(char c)
{
    switch(c)
    {
        case '!':
        case '\"':
        case '#':
        case '%':
        case '&':
        case ''':
        case '(':
        case ')':
        case ';':
        case '<':
        case '=':
        case '>':
        case '?':
        case '[':
        case '\\':
        case ']':
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case ':':
        case '^':
            return 1;
            break;

defualt:
            return 0;
            break;

    }
    return 0;
}

int isgraph(int c)
{
    if(ispunct(c) || isalnum(c))
        return 1;

    return 0;
}

int islower(char c)
{
    if(c >= 'a' && c <= 'z')
        return 1; 

    return 0;
}
int isprint(char c)
{
    if(isgraph(c) || isspace(c))
        return 1;

    return 0;
}


int isspace(char c)
{
    if(c == ' ' || c == '\v' || c == '\t')
        return 1;

    return 0;
}

int isupper(char c)
{
    if(c >= 'A' && c <= 'Z')
        return 1;  

    return 0;
}

int isxdigit(char c)
{
    if((isdigit(c)) || ((c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')))
        return 1;

    return 0;    
}

int tolower(char c)
{
    if(isupper(c))
        return c - ('A' - 'a');
    if(islower(c))
        return c;

    return '\0';  
}

int toupper(char c)
{
    if(islower(c)) 
        return c + ('A' - 'a');
    if(isupper(c))
        return c;

    return '\0';    
}
