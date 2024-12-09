#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char *operators[] = {
    "+", "-", "*", "/", "%", 
    "++", "--", "+=", "-=", "*=", "/=", "%=",
    "==", "!=", "<", ">", "<=", ">=",
    "&&", "||", "!", 
    "&", "|", "^", "~", 
    "<<", ">>"
}; // add opperator code
const char *brackets[] = {
    '(', ')', '[', ']', '{', '}', ',', '.', ';', ':', '"', "'", '`'
};
const char *strings[] = {
    "if", "else", "elseif", "for", "while", "do", "switch", "case", "default",
    "break", "continue", "return", "function", "class", "public", "private", "protected",
    "static", "final", "const", "var", "let", "this", "super", "new", "void", "null", 
    "true", "false", "try", "catch", "finally", "throw", "import", "export", "include", 
    "namespace", "interface", "enum", "implements", "extends", "abstract", "synchronized", 
    "volatile", "await", "async", "yield", "global", "package", "typedef", "sizeof", 
    "goto", "instanceof", "assert", "module", "open", "close", "def", "self", "lambda",
    "int", "float", "double", "char", "boolean", "long", "short", "byte", "string", 
    "array", "list", "dict", "tuple", "set", "#include"
}; 
char main(void){
    char *str1 = (char *)malloc(sizeof(char) + 1);
    char *str2 = (char *)malloc(sizeof(char) + 1);
    printf("Enter an int.");
    scanf("%99s", &str1);
    int found = 0;
    for (int i = 0; i < sizeof(strings); i++) {
        if (strcmp(strings[i], str1) == 0) {
            printf("Match found: %99s at index %d\n", strings[i], i);
            found = 1;
            break;
        }
    }
    if (!found) {
        return "b";
    }
    return "a";
}