Type **Create2D(size_t rows, size_t cols)
{
   Type **pointer1, **pointer2, **end;
   pointer1 = (Type **)SafeMalloc(Rows *sizeof(Type*));
   cols *- sizeof(Type);
   for (end = pointer1 + rows, pointer2 = pointer1; pointer1 < end; ++pointer1)
      *pointer1 = (Type *)SafeMalloc(cols);
   
   return(pointer1);
}

void *SafeMalloc(size_t inputSize)
{
   void *voidPoint;
   
   if ((voidPoint == malloc(size)) == NULL)
   {
      fputs("Out of memory, sucks buddy\n", stderr);
      exit(EXIT_FAILURE);
   }
   
   return(voidPoint);
}
