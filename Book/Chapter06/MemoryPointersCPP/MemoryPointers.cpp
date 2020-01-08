int a, b;
int *pa, *pb = &b;
 
int main(int argc, char* argv[])
{
	__asm
	{
		lea eax,   a 
		mov [pa],  eax

		mov eax,   [pa]
		mov [eax], 1

		mov ebx,   [pb]
		mov [ebx], 1

		mov ecx,   [eax]
		add ecx,   [ebx]

		mov [ebx], ecx
	}

	return 0;
}
