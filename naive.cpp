#include<bits/stdc++.h>
using namespace std;

void search(char* pat, char* txt) {
	int M = strlen(pat);
	int N = strlen(txt);
  int j;
	for (int i = 0; i <= N - M; i++) {
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;
		if (j == M)
			cout << "Pattern found at index " << i << endl;
	}
}

int main() {
	char txt[] = "AABAACAADAABAAABAA";
	char pat[] = "AABA";
	search(pat, txt);
	return 0;
}
