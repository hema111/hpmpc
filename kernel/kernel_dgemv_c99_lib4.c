// it moves vertically across blocks
void kernel_dgemv_t_8_c99_lib4(int kmax, int kna, double *A, int sda, double *x, double *y, int alg)
	{
	
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	const int bs  = 4;
	
	int
		k, ka=kmax-kna;
	
	double
		x_0, x_1, x_2, x_3,
		y_0=0, y_1=0, y_2=0, y_3=0,
		y_4=0, y_5=0, y_6=0, y_7=0;
	
	if(kna>0)
		{
		k=0;
		for(; k<kna; k++)
			{
		
			x_0 = x[0];
		
			y_0 += A[0+lda*0] * x_0;
			y_1 += A[0+lda*1] * x_0;
			y_2 += A[0+lda*2] * x_0;
			y_3 += A[0+lda*3] * x_0;
			y_4 += A[0+lda*4] * x_0;
			y_5 += A[0+lda*5] * x_0;
			y_6 += A[0+lda*6] * x_0;
			y_7 += A[0+lda*7] * x_0;
		
			A += 1;
			x += 1;
		
			}
	
		A += (sda-1)*lda;
		}

	k=0;
	for(; k<ka-bs+1; k+=bs)
		{
		
		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];
		
		y_0 += A[0+lda*0] * x_0;
		y_1 += A[0+lda*1] * x_0;
		y_2 += A[0+lda*2] * x_0;
		y_3 += A[0+lda*3] * x_0;
		y_4 += A[0+lda*4] * x_0;
		y_5 += A[0+lda*5] * x_0;
		y_6 += A[0+lda*6] * x_0;
		y_7 += A[0+lda*7] * x_0;

		y_0 += A[1+lda*0] * x_1;
		y_1 += A[1+lda*1] * x_1;
		y_2 += A[1+lda*2] * x_1;
		y_3 += A[1+lda*3] * x_1;
		y_4 += A[1+lda*4] * x_1;
		y_5 += A[1+lda*5] * x_1;
		y_6 += A[1+lda*6] * x_1;
		y_7 += A[1+lda*7] * x_1;
		
		y_0 += A[2+lda*0] * x_2;
		y_1 += A[2+lda*1] * x_2;
		y_2 += A[2+lda*2] * x_2;
		y_3 += A[2+lda*3] * x_2;
		y_4 += A[2+lda*4] * x_2;
		y_5 += A[2+lda*5] * x_2;
		y_6 += A[2+lda*6] * x_2;
		y_7 += A[2+lda*7] * x_2;

		y_0 += A[3+lda*0] * x_3;
		y_1 += A[3+lda*1] * x_3;
		y_2 += A[3+lda*2] * x_3;
		y_3 += A[3+lda*3] * x_3;
		y_4 += A[3+lda*4] * x_3;
		y_5 += A[3+lda*5] * x_3;
		y_6 += A[3+lda*6] * x_3;
		y_7 += A[3+lda*7] * x_3;
		
		A += sda*bs;
		x += 4;

		}
	
	for(; k<ka; k++)
		{
		
		x_0 = x[0];
	
		y_0 += A[0+lda*0] * x_0;
		y_1 += A[0+lda*1] * x_0;
		y_2 += A[0+lda*2] * x_0;
		y_3 += A[0+lda*3] * x_0;
		y_4 += A[0+lda*4] * x_0;
		y_5 += A[0+lda*5] * x_0;
		y_6 += A[0+lda*6] * x_0;
		y_7 += A[0+lda*7] * x_0;
	
		A += 1;
		x += 1;
		
		}

	if(alg==0)
		{
		y[0] = y_0;
		y[1] = y_1;
		y[2] = y_2;
		y[3] = y_3;
		y[4] = y_4;
		y[5] = y_5;
		y[6] = y_6;
		y[7] = y_7;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		y[1] += y_1;
		y[2] += y_2;
		y[3] += y_3;
		y[4] += y_4;
		y[5] += y_5;
		y[6] += y_6;
		y[7] += y_7;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		y[1] -= y_1;
		y[2] -= y_2;
		y[3] -= y_3;
		y[4] -= y_4;
		y[5] -= y_5;
		y[6] -= y_6;
		y[7] -= y_7;
		}
	
	}



// it moves vertically across blocks
void kernel_dgemv_t_4_c99_lib4(int kmax, int kna, double *A, int sda, double *x, double *y, int alg)
	{
	
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	const int bs  = 4;
	
	int
		k, ka=kmax-kna;
	
	double
		x_0, x_1, x_2, x_3,
		y_0=0, y_1=0, y_2=0, y_3=0;
	
	if(kna>0)
		{
		k=0;
		for(; k<kna; k++)
			{
		
			x_0 = x[0];
		
			y_0 += A[0+lda*0] * x_0;
			y_1 += A[0+lda*1] * x_0;
			y_2 += A[0+lda*2] * x_0;
			y_3 += A[0+lda*3] * x_0;
		
			A += 1;
			x += 1;
		
			}
	
		A += (sda-1)*lda;
		}

	k=0;
	for(; k<ka-bs+1; k+=bs)
		{
		
		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];
		
		y_0 += A[0+lda*0] * x_0;
		y_1 += A[0+lda*1] * x_0;
		y_2 += A[0+lda*2] * x_0;
		y_3 += A[0+lda*3] * x_0;

		y_0 += A[1+lda*0] * x_1;
		y_1 += A[1+lda*1] * x_1;
		y_2 += A[1+lda*2] * x_1;
		y_3 += A[1+lda*3] * x_1;
		
		y_0 += A[2+lda*0] * x_2;
		y_1 += A[2+lda*1] * x_2;
		y_2 += A[2+lda*2] * x_2;
		y_3 += A[2+lda*3] * x_2;

		y_0 += A[3+lda*0] * x_3;
		y_1 += A[3+lda*1] * x_3;
		y_2 += A[3+lda*2] * x_3;
		y_3 += A[3+lda*3] * x_3;
		
		A += sda*bs;
		x += 4;

		}
	
	for(; k<ka; k++)
		{
		
		x_0 = x[0];
	
		y_0 += A[0+lda*0] * x_0;
		y_1 += A[0+lda*1] * x_0;
		y_2 += A[0+lda*2] * x_0;
		y_3 += A[0+lda*3] * x_0;
	
		A += 1;
		x += 1;
		
		}

	if(alg==0)
		{
		y[0] = y_0;
		y[1] = y_1;
		y[2] = y_2;
		y[3] = y_3;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		y[1] += y_1;
		y[2] += y_2;
		y[3] += y_3;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		y[1] -= y_1;
		y[2] -= y_2;
		y[3] -= y_3;
		}
	
	}



// it moves vertically across blocks
void kernel_dgemv_t_2_c99_lib4(int kmax, int kna, double *A, int sda, double *x, double *y, int alg)
	{
	
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	const int bs  = 4;
	
	int
		k, ka=kmax-kna;
	
	double
		x_0, x_1, x_2, x_3,
		y_0=0, y_1=0;
	
	if(kna>0)
		{
		k=0;
		for(; k<kna; k++)
			{
		
			x_0 = x[0];
		
			y_0 += A[0+lda*0] * x_0;
			y_1 += A[0+lda*1] * x_0;
		
			A += 1;
			x += 1;
		
			}
	
		A += (sda-1)*lda;
		}

	k=0;
	for(; k<ka-bs+1; k+=bs)
		{
		
		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];
		
		y_0 += A[0+lda*0] * x_0;
		y_1 += A[0+lda*1] * x_0;

		y_0 += A[1+lda*0] * x_1;
		y_1 += A[1+lda*1] * x_1;
		
		y_0 += A[2+lda*0] * x_2;
		y_1 += A[2+lda*1] * x_2;

		y_0 += A[3+lda*0] * x_3;
		y_1 += A[3+lda*1] * x_3;
		
		A += sda*bs;
		x += 4;

		}
	
	for(; k<ka; k++)
		{
		
		x_0 = x[0];
	
		y_0 += A[0+lda*0] * x_0;
		y_1 += A[0+lda*1] * x_0;
	
		A += 1;
		x += 1;
		
		}

	if(alg==0)
		{
		y[0] = y_0;
		y[1] = y_1;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		y[1] += y_1;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		y[1] -= y_1;
		}
	
	}



// it moves vertically across blocks
void kernel_dgemv_t_1_c99_lib4(int kmax, int kna, double *A, int sda, double *x, double *y, int alg)
	{
	
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	const int bs  = 4;
	
	int
		k, ka=kmax-kna;
	
	double
		x_0, x_1, x_2, x_3,
		y_0=0;
	
	if(kna>0)
		{
		k=0;
		for(; k<kna; k++)
			{
		
			x_0 = x[0];
		
			y_0 += A[0+lda*0] * x_0;
		
			A += 1;
			x += 1;
		
			}
	
		A += (sda-1)*lda;
		}

	k=0;
	for(; k<ka-bs+1; k+=bs)
		{
		
		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];
		
		y_0 += A[0+lda*0] * x_0;
		y_0 += A[1+lda*0] * x_1;
		y_0 += A[2+lda*0] * x_2;
		y_0 += A[3+lda*0] * x_3;
		
		A += sda*bs;
		x += 4;

		}
	
	for(; k<ka; k++)
		{
		
		x_0 = x[0];
	
		y_0 += A[0+lda*0] * x_0;
	
		A += 1;
		x += 1;
		
		}

	if(alg==0)
		{
		y[0] = y_0;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		}
	
	}



// it moves horizontally inside a block
void kernel_dgemv_n_8_c99_lib4(int kmax, double *A0, double *A1, double *x, double *y, int alg)
	{
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	
	int k;

	double
		x_0, x_1, x_2, x_3,
		y_0=0, y_1=0, y_2=0, y_3=0,
		y_4=0, y_5=0, y_6=0, y_7=0;
	
	k=0;
	for(; k<kmax-3; k+=4)
		{

		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];

		y_0 += A0[0+lda*0] * x_0;
		y_1 += A0[1+lda*0] * x_0;
		y_2 += A0[2+lda*0] * x_0;
		y_3 += A0[3+lda*0] * x_0;
		y_4 += A1[0+lda*0] * x_0;
		y_5 += A1[1+lda*0] * x_0;
		y_6 += A1[2+lda*0] * x_0;
		y_7 += A1[3+lda*0] * x_0;

		y_0 += A0[0+lda*1] * x_1;
		y_1 += A0[1+lda*1] * x_1;
		y_2 += A0[2+lda*1] * x_1;
		y_3 += A0[3+lda*1] * x_1;
		y_4 += A1[0+lda*1] * x_1;
		y_5 += A1[1+lda*1] * x_1;
		y_6 += A1[2+lda*1] * x_1;
		y_7 += A1[3+lda*1] * x_1;

		y_0 += A0[0+lda*2] * x_2;
		y_1 += A0[1+lda*2] * x_2;
		y_2 += A0[2+lda*2] * x_2;
		y_3 += A0[3+lda*2] * x_2;
		y_4 += A1[0+lda*2] * x_2;
		y_5 += A1[1+lda*2] * x_2;
		y_6 += A1[2+lda*2] * x_2;
		y_7 += A1[3+lda*2] * x_2;

		y_0 += A0[0+lda*3] * x_3;
		y_1 += A0[1+lda*3] * x_3;
		y_2 += A0[2+lda*3] * x_3;
		y_3 += A0[3+lda*3] * x_3;
		y_4 += A1[0+lda*3] * x_3;
		y_5 += A1[1+lda*3] * x_3;
		y_6 += A1[2+lda*3] * x_3;
		y_7 += A1[3+lda*3] * x_3;
		
		A0 += 4*lda;
		A1 += 4*lda;
		x += 4;

		}

	for(; k<kmax; k++)
		{

		x_0 = x[0];

		y_0 += A0[0+lda*0] * x_0;
		y_1 += A0[1+lda*0] * x_0;
		y_2 += A0[2+lda*0] * x_0;
		y_3 += A0[3+lda*0] * x_0;
		y_4 += A1[0+lda*0] * x_0;
		y_5 += A1[1+lda*0] * x_0;
		y_6 += A1[2+lda*0] * x_0;
		y_7 += A1[3+lda*0] * x_0;
		
		A0 += 1*lda;
		A1 += 1*lda;
		x += 1;

		}

	if(alg==0)
		{
		y[0] = y_0;
		y[1] = y_1;
		y[2] = y_2;
		y[3] = y_3;
		y[4] = y_4;
		y[5] = y_5;
		y[6] = y_6;
		y[7] = y_7;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		y[1] += y_1;
		y[2] += y_2;
		y[3] += y_3;
		y[4] += y_4;
		y[5] += y_5;
		y[6] += y_6;
		y[7] += y_7;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		y[1] -= y_1;
		y[2] -= y_2;
		y[3] -= y_3;
		y[4] -= y_4;
		y[5] -= y_5;
		y[6] -= y_6;
		y[7] -= y_7;
		}

	}

// it moves horizontally inside a block
void kernel_dgemv_n_4_c99_lib4(int kmax, double *A, double *x, double *y, int alg)
	{
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	
	int k;

	double
		x_0, x_1, x_2, x_3,
		y_0=0, y_1=0, y_2=0, y_3=0;
	
	k=0;
	for(; k<kmax-3; k+=4)
		{

		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];

		y_0 += A[0+lda*0] * x_0;
		y_1 += A[1+lda*0] * x_0;
		y_2 += A[2+lda*0] * x_0;
		y_3 += A[3+lda*0] * x_0;

		y_0 += A[0+lda*1] * x_1;
		y_1 += A[1+lda*1] * x_1;
		y_2 += A[2+lda*1] * x_1;
		y_3 += A[3+lda*1] * x_1;

		y_0 += A[0+lda*2] * x_2;
		y_1 += A[1+lda*2] * x_2;
		y_2 += A[2+lda*2] * x_2;
		y_3 += A[3+lda*2] * x_2;

		y_0 += A[0+lda*3] * x_3;
		y_1 += A[1+lda*3] * x_3;
		y_2 += A[2+lda*3] * x_3;
		y_3 += A[3+lda*3] * x_3;
		
		A += 4*lda;
		x += 4;

		}

	for(; k<kmax; k++)
		{

		x_0 = x[0];

		y_0 += A[0+lda*0] * x_0;
		y_1 += A[1+lda*0] * x_0;
		y_2 += A[2+lda*0] * x_0;
		y_3 += A[3+lda*0] * x_0;
		
		A += 1*lda;
		x += 1;

		}

	if(alg==0)
		{
		y[0] = y_0;
		y[1] = y_1;
		y[2] = y_2;
		y[3] = y_3;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		y[1] += y_1;
		y[2] += y_2;
		y[3] += y_3;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		y[1] -= y_1;
		y[2] -= y_2;
		y[3] -= y_3;
		}

	}



// it moves horizontally inside a block
void kernel_dgemv_n_2_c99_lib4(int kmax, double *A, double *x, double *y, int alg)
	{
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	
	int k;

	double
		x_0, x_1, x_2, x_3,
		y_0=0, y_1=0;
	
	k=0;
	for(; k<kmax-3; k+=4)
		{

		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];

		y_0 += A[0+lda*0] * x_0;
		y_1 += A[1+lda*0] * x_0;

		y_0 += A[0+lda*1] * x_1;
		y_1 += A[1+lda*1] * x_1;

		y_0 += A[0+lda*2] * x_2;
		y_1 += A[1+lda*2] * x_2;

		y_0 += A[0+lda*3] * x_3;
		y_1 += A[1+lda*3] * x_3;
		
		A += 4*lda;
		x += 4;

		}

	for(; k<kmax; k++)
		{

		x_0 = x[0];

		y_0 += A[0+lda*0] * x_0;
		y_1 += A[1+lda*0] * x_0;
		
		A += 1*lda;
		x += 1;

		}

	if(alg==0)
		{
		y[0] = y_0;
		y[1] = y_1;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		y[1] += y_1;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		y[1] -= y_1;
		}

	}



// it moves horizontally inside a block
void kernel_dgemv_n_1_c99_lib4(int kmax, double *A, double *x, double *y, int alg)
	{
	if(kmax<=0) 
		return;
	
	const int lda = 4;
	
	int k;

	double
		x_0, x_1, x_2, x_3,
		y_0=0;
	
	k=0;
	for(; k<kmax-3; k+=4)
		{

		x_0 = x[0];
		x_1 = x[1];
		x_2 = x[2];
		x_3 = x[3];

		y_0 += A[0+lda*0] * x_0;
		y_0 += A[0+lda*1] * x_1;
		y_0 += A[0+lda*2] * x_2;
		y_0 += A[0+lda*3] * x_3;
		
		A += 4*lda;
		x += 4;

		}

	for(; k<kmax; k++)
		{

		x_0 = x[0];

		y_0 += A[0+lda*0] * x_0;
		
		A += 1*lda;
		x += 1;

		}

	if(alg==0)
		{
		y[0] = y_0;
		}
	else if(alg==1)
		{
		y[0] += y_0;
		}
	else // alg==-1
		{
		y[0] -= y_0;
		}

	}

