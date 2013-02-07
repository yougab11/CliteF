int main ( ) {
	int ivar;
	float fvar;
	bool bvar;
	char cvar;
	ivar = 5;
	fvar = 7.5;
	bvar = true;
	cvar = 'g';
	if (bvar) {
		while (ivar < 10) {
			fvar = fvar + 1.5;
			ivar = ivar + 1;
		}
	}	
	else {;}
	
	ivar = 2 * 3 + 4;
	bvar = bvar && false;
	ivar = -ivar;
	bvar = ivar >= 5;
}
