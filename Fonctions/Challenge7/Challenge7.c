#include <stdio.h>
#include <string.h>

void inverser_chaine(char *str) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

int main() {
	char chaine[100] = "Bonjour";
	inverser_chaine(chaine);
	printf("Chaine inversée : %s\n", chaine);
	return 0;
}
