#include "main.h"
/**
  *specifier - it stores the specifier in char c
  *@c: the charcter that stores specifeir
  *Return: returns the encountered specifier
  */
int specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'x' || c == 'X' || c == 'd');
	return (c == '%' || c == 'i' || c == 'o' || c == 'u' || c == 'b' || c == 'p');
}
