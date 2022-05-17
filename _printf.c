#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: number of bytes printed
 */

char *_strrev (char *str)
{
  int i;
  int len = 0;
  char c;
  if (!str)
    return NULL;
  while(str[len] != '\0'){
    len++;
  }
  for(i = 0; i < (len/2); i++)
  {
    c = str[i];
    str [i] = str[len - i - 1];
    str[len - i - 1] = c;
  }
  return str;
}

//For integer to string conversion
char * _itoa(int i, char *strout, int base)
{
  char *str = strout;
  int digit, sign = 0;
  if (i < 0) {
    sign = 1;
    i *= -1;
  }
  while(i) {
    digit = i % base;
    *str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
    i = i / base;
    str ++;
  }
  if(sign) {
  *str++ = '-';
  }
  *str = '\0';
  _strrev(strout);
  return strout;
}

int _printf(char * str, ...)
{
  va_list args;
  int i = 0, j=0;
  char buff[100]={0}, tmp[20];
  char * str_arg;
  
  va_start( args, str );
  while (str && str[i])
  {
    if(str[i] == '%'){
      i++;  //move to next address
      
      switch (str[i]) {
        /* Convert char */
        case 'c': {
          buff[j] = (char)va_arg( args, int );
          j++;
          break;
        }
        
        /* Convert decimal */
        case 'd': {
          _itoa(va_arg( args, int ), tmp, 10);
          strcpy(&buff[j], tmp);
          j += strlen(tmp);
          break;
        }
        
        /* Convert hex */
        case 'x': {
          _itoa(va_arg( args, int ), tmp, 16);
          strcpy(&buff[j], tmp);
          j += strlen(tmp);
          break;
        }
        
        /* Convert octal */
        case 'o': {
          _itoa(va_arg( args, int ), tmp, 8);
          strcpy(&buff[j], tmp);
          j += strlen(tmp);
          break;
        }
        
        /* copy string */
        case 's': {
          str_arg = va_arg( args, char* );
          strcpy(&buff[j], str_arg);
          j += strlen(str_arg);
          break;
        }
      }
    } else {
      buff[j] = str[i];
      j++;
    }
    i++;
  } 
  fwrite(buff, j, 1, stdout); 
  va_end(args);
  return j;
}

