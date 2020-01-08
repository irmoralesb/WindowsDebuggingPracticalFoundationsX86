int a, b;

int main(int argc, char* argv[])
{
	__asm
	{
		lea eax, a
		mov [eax], 1
 
		lea ebx, b
		mov [ebx], 1

		mov eax, [eax]
		add [ebx], eax

		inc eax

		imul [ebx]
		mov [ebx], eax
	}

	return 0;
}