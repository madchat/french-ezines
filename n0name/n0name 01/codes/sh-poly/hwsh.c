unsigned char shellcode[] = 

       "\xb8\x04\x00\x00\x00"
       "\xbb\x01\x00\x00\x00"
       "\xb9\xac\x90\x04\x08"
       "\xba\x0f\x00\x00\x00"
       "\xcd\x80"
       "\x66\xb8\x07\x53"
       "\x66\xb9\x02\x00"
       "\x66\xbb\x01\x00"
       "\xcd\x15"
       "\xb8\x01\x00\x00\x00"
       "\xcd\x80";

int main()
{
    void (*f)();
    f = (void *) shellcode;
    printf("%d\n", strlen(shellcode));
    f();
}