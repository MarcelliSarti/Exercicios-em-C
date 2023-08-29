#include <stdio.h>

int main() {
	int n, s, Fn, Fs, NS, FNS, result;

	scanf("%d/n", &n);

	Fn=1;
	for (int i=1; i<=n; i++) {
		Fn = Fn * i;
	}

	scanf("%d/n", &s);

	Fs=1;
	for (int i=1; i<=s; i++) {
		Fs = Fs * i;
	}

	NS=n-s;
	FNS=1;
	for (int i=1; i<=NS; i++) {
		FNS = FNS * i;
	}

	result= Fn / (Fs * FNS);

	printf("%d\n", result);
	return 0;
}