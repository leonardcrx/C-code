static unsigned long int next;
int rand0()
{next=next*1103515245+12345;
 return(unsigned int)(next/65536)%32768;

}

void chgsed(unsigned int seed)
{
next=seed;
}
