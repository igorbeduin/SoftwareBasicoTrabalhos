MOD_B: BEGIN
SECTION DATA
FAT: EXTERN
	N: EXTERN
	PUBLIC MOD_B
	AUX: SPACE
SECTION TEXT
	STORE AUX
	MULT N
	STORE N
	LOAD AUX
	JMP FAT

END