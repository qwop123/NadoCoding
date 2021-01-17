#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#pragma warning(disable : 4996)warning pragma

int point = 0;

//�����Լ�
void nums_to_arr(int** p, int a, int  b, int  c, int  d, int  e, int  f, int  g, int  h)
{
	p[0][0] = a;
	p[0][1] = b;
	p[1][0] = c;
	p[1][1] = d;
	p[2][0] = e;
	p[2][1] = f;
	p[3][0] = g;
	p[3][1] = h;
	return;
}
int spin(int n)
{
	if (n == 3) return 0;
	else return n + 1;
}
int anti_spin(int n)
{
	if (n == 0) return 3;
	else return n - 1;
}
void show_graphic(char*** p)
{
	int i, j = 0;
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++)
		{
			printf("%s", p[i][j]);
		}
		printf("\n");
	}
	printf("                  �������� : %d", point);
	return;
}
int arrow(char key)
{
	switch (key)
	{
	case 72:
		return 0;
	case 75:
		return 1;
	case 77:
		return 3;
	case 80:
		return 2;
	default:
		return -1;
	}
}
int anti_arrow(char key)
{
	switch (key)
	{
	case 72:
		return 2;
	case 75:
		return 3;
	case 77:
		return 1;
	case 80:
		return 0;
	default:
		return -1;
	}
}
void show_coords(int** block_coors, int* location)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%3d%3d\n", location[0] + block_coors[i][0], location[1] + block_coors[i][1]);
	}
	return;
}
void coor_to_coor(int** p, int** q)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			p[i][j] = q[i][j];
		}
	}
	return;
}




/********��ϰ���**********/
//�������� ������ �߽ɱ��� ������ ��ġ�� ��ȯ
void block_type_to_coors(int** p, int blocktype, int spinvalue)
{
	switch (blocktype)
	{
	case 0:
		switch (spinvalue)
		{
		case 0:
			nums_to_arr(p, -1, 0, 0, 0, 1, 0, 2, 0);
			return;
		case 1:
			nums_to_arr(p, 0, -1, 0, 0, 0, 1, 0, 2);
			return;
		case 2:
			nums_to_arr(p, -1, 0, 0, 0, 1, 0, 2, 0);
			return;
		case 3:
			nums_to_arr(p, 0, -1, 0, 0, 0, 1, 0, 2);
			return;
		}
	case 1:
		switch (spinvalue)
		{
		case 0:
			nums_to_arr(p, -1, -1, 0, -1, 0, 0, 0, 1);
			return;
		case 1:
			nums_to_arr(p, -1, 0, 0, 0, 1, 0, 1, -1);
			return;
		case 2:
			nums_to_arr(p, 0, -1, 0, 0, 0, 1, 1, 1);
			return;
		case 3:
			nums_to_arr(p, -1, 0, -1, 1, 0, 0, 1, 0);
			return;
		}
	case 2:
		switch (spinvalue)
		{
		case 0:
			nums_to_arr(p, 0, -1, 0, 0, 0, 1, -1, 1);
			return;
		case 1:
			nums_to_arr(p, -1, -1, -1, 0, 0, 0, 1, 0);
			return;
		case 2:
			nums_to_arr(p, 1, -1, 0, -1, 0, 0, 0, 1);
			return;
		case 3:
			nums_to_arr(p, -1, 0, 0, 0, 1, 0, 1, 1);
			return;
		}
	case 3:
		switch (spinvalue)
		{
		case 0:
			nums_to_arr(p, -1, 0, 0, 0, 0, 1, 1, 1);
			return;
		case 1:
			nums_to_arr(p, 0, -1, 0, 0, -1, 0, -1, 1);
			return;
		case 2:
			nums_to_arr(p, -1, 0, 0, 0, 0, 1, 1, 1);
			return;
		case 3:
			nums_to_arr(p, 0, -1, 0, 0, -1, 0, -1, 1);
			return;
		}
	case 4:
		switch (spinvalue)
		{
		case 0:
			nums_to_arr(p, 0, 0, 0, 1, -1, 1, 1, 0);
			return;
		case 1:
			nums_to_arr(p, -1, -1, -1, 0, 0, 0, 0, 1);
			return;
		case 2:
			nums_to_arr(p, 0, 0, 0, 1, -1, 1, 1, 0);
			return;
		case 3:
			nums_to_arr(p, -1, -1, -1, 0, 0, 0, 0, 1);
			return;
		}
	case 5:
		switch (spinvalue)
		{
		case 0:
			nums_to_arr(p, 0, 0, 0, 1, 1, 0, 1, 1);
			return;
		case 1:
			nums_to_arr(p, 0, 0, 0, 1, 1, 0, 1, 1);
			return;
		case 2:
			nums_to_arr(p, 0, 0, 0, 1, 1, 0, 1, 1);
			return;
		case 3:
			nums_to_arr(p, 0, 0, 0, 1, 1, 0, 1, 1);
			return;
		}
	}
}
//��ǥ, �������ǥ�迭, �������� ������ ���� �׷��ȿ� ����
void put_block(char*** p, int** q, int a, int b)
{
	int i, tempi, tempj;
	for (i = 0; i < 4; i++)
	{
		tempi = a + q[i][0];
		tempj = b + q[i][1];
		p[tempi][tempj] = "��";
	}
}
//��ǥ, �������ǥ�迭, �������� ������ ���� �׷��ȿ��� ����
void del_block(char*** p, int** q, int a, int b)
{
	int i, tempi, tempj;
	for (i = 0; i < 4; i++)
	{
		tempi = a + q[i][0];
		tempj = b + q[i][1];
		p[tempi][tempj] = "  ";
	}
}
//������, ����Ű�� �Է¹����� �������� ��ȯ
void move_coors(int* location, int key)
{
	int i;
	switch (key)
	{
	case 0:
		location[0] -= 1;
		return;
	case 1:
		location[1] -= 1;
		return;
	case 2:
		location[0] += 1;
		return;
	case 3:
		location[1] += 1;
		return;
	}
}
//�������ǥ, �������� �Է¹����� �׷��ȿ� ���� �� �ִ����� �Ǵ�
int can_put(char*** graphic, int** block_coors, int* location)
{
	int a, b, i;
	for (i = 0; i < 4; i++)
	{
		a = location[0] + block_coors[i][0];
		b = location[1] + block_coors[i][1];//a,b�� ������ �簢����ǥ�� ����
		if ((b < 10) || (b > 19)) return 0;
		if (graphic[a][b] != "  ") return 0;
	}
	return 1;
}


/*******��������******/
//�׷���, ���� �Է¹����� �ش� ���� ��á������ �Ǵ�
int is_row_full(char*** graphic, int r)
{
	int j;
	for (j = 10; j < 20; j++) if (graphic[r][j] == "  ") return 0;
	return 1;
}
//�׷����� ������ �������ָ� �׷��ȵ� ������
void row_clear(char*** graphic)
{
	int i, j, k, high = 4;
	for (i = 24; i > high; i--)
	{
		if (is_row_full(graphic, i))//i���� ��á����
		{
			graphic[i][10] = "��";
			graphic[i][11] = "��";
			graphic[i][12] = "��";
			system("cls");
			show_graphic(graphic);
			graphic[i][13] = "��";
			graphic[i][14] = "��";
			graphic[i][15] = "��";
			system("cls");
			show_graphic(graphic);
			graphic[i][16] = "��";
			graphic[i][17] = "��";
			system("cls");
			show_graphic(graphic);
			graphic[i][18] = "��";
			graphic[i][19] = "��";
			system("cls");
			show_graphic(graphic);
			for (k = i; k > high; k--)//i����� ���� ��
			{
				for (j = 10; j < 20; j++)//��� ����
				{
					graphic[k][j] = graphic[k - 1][j];
				}
			}
			i++;
			high++;
			point += 1000;

		}
	}
}


//���̢�
int main()
{
	int i = 0, j = 0, key, a, b;
	int blocktype, spinvalue, next_blocktype, next_spinvalue;
	char*** graphic;//���ڿ��� ���ҷ� ���� 2���� �迭
	int** block_coors;//���� �����ǥ��
	int** next_block_coors;
	int* location;//���߽��� ��ġ
	int* tl;
	clock_t start;

	//graphic �����Ҵ�
	graphic = (char***)malloc(sizeof(char**) * 30);
	for (i = 0; i < 30; i++)
	{
		graphic[i] = (char**)malloc(sizeof(char*) * 30);//30���� �� Ȯ��
	}

	//block_coors �����Ҵ�
	block_coors = (int**)malloc(sizeof(int*) * 4);
	for (i = 0; i < 4; i++)	block_coors[i] = (int*)malloc(sizeof(int) * 2);
	next_block_coors = (int**)malloc(sizeof(int*) * 4);
	for (i = 0; i < 4; i++)	next_block_coors[i] = (int*)malloc(sizeof(int) * 2);

	//location �����Ҵ�
	location = (int*)malloc(sizeof(int) * 2);
	tl = (int*)malloc(sizeof(int) * 2);
	tl[0] = 7;
	tl[1] = 24;

	//�⺻����
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++)
		{
			if (i == 25 && j > 8 && j < 21) graphic[i][j] = "��";
			else if (j == 9 && i > 4 && i < 26) graphic[i][j] = "��";
			else if (j == 20 && i > 4 && i < 26) graphic[i][j] = "��";
			else graphic[i][j] = "  ";
		}
	}

	location[0] = 4;
	location[1] = 14;//�������� �����Ǵ� ��
	srand(time(NULL));
	blocktype = rand() % 6;
	spinvalue = rand() % 4;
	next_blocktype = rand() % 6;
	next_spinvalue = rand() % 4;
	block_type_to_coors(block_coors, blocktype, spinvalue);
	block_type_to_coors(next_block_coors, next_blocktype, next_spinvalue);
	put_block(graphic, block_coors, location[0], location[1]);
	put_block(graphic, next_block_coors, 7, 24);
	system("cls");
	show_graphic(graphic);
	start = clock();
	while (1)
	{
		//Ű�� ���� ���
		if (kbhit())
		{
			key = getch();

			//����Ű�� �������
			if (key == 224)
			{
				key = getch();

				//�� Ű�� �������
				if (arrow(key) == 0)
				{
					del_block(graphic, block_coors, location[0], location[1]);//���� �����
					while (1)
					{
						move_coors(location, 2);//�������� ��ĭ ����
						if (can_put(graphic, block_coors, location))//����� �������� ���� �� �ִٸ�
						{
							continue;
						}
						else//����� �������� ���� �� ���ٸ�
						{
							move_coors(location, 0); //������ ���󺹱�
							put_block(graphic, block_coors, location[0], location[1]);//������
							row_clear(graphic);
							location[0] = 4;
							location[1] = 14;//�������� �����Ǵ� ��
							del_block(graphic, next_block_coors, 7, 24);
							coor_to_coor(block_coors, next_block_coors);
							blocktype = next_blocktype;
							spinvalue = next_spinvalue;
							next_blocktype = rand() % 6;
							next_spinvalue = rand() % 4;//�����������Է�
							block_type_to_coors(next_block_coors, next_blocktype, next_spinvalue);//����ǥ �ľ�
							if (can_put(graphic, block_coors, location))//�� ���� ���� �� �ִٸ�
							{
								put_block(graphic, block_coors, location[0], location[1]);//������
								put_block(graphic, next_block_coors, 7, 24);
								system("cls");
								show_graphic(graphic);//������
							}
							else//�� �� ������ �ڸ��� ����
							{
								put_block(graphic, block_coors, location[0], location[1]);//������
								put_block(graphic, next_block_coors, 7, 24);
								system("cls");
								show_graphic(graphic);//������
								printf("\n���ӿ���.");
								return 0;
							}
							break;
						}
					}
				}
				//��,��,��
				else
				{
					del_block(graphic, block_coors, location[0], location[1]);//���� �����
					move_coors(location, arrow(key));//�������� ������
					if (can_put(graphic, block_coors, location))//����� �������� ���� �� �ִٸ�
					{
						put_block(graphic, block_coors, location[0], location[1]);
						system("cls");
						show_graphic(graphic);

					}
					else//����� �������� ���� �� ���ٸ�
					{
						if (arrow(key) == 2)//�Ʒ��ΰ� ���� ���
						{
							move_coors(location, 0); //������ ���󺹱�
							put_block(graphic, block_coors, location[0], location[1]);//������
							row_clear(graphic);
							location[0] = 4;
							location[1] = 14;//�������� �����Ǵ� ��
							del_block(graphic, next_block_coors, 7, 24);
							coor_to_coor(block_coors, next_block_coors);
							blocktype = next_blocktype;
							spinvalue = next_spinvalue;
							next_blocktype = rand() % 6;
							next_spinvalue = rand() % 4;//�����������Է�
							block_type_to_coors(next_block_coors, next_blocktype, next_spinvalue);//����ǥ �ľ�

							if (can_put(graphic, block_coors, location))//�� ���� ���� �� �ִٸ�
							{
								put_block(graphic, block_coors, location[0], location[1]);//������
								put_block(graphic, next_block_coors, 7, 24);
								system("cls");
								show_graphic(graphic);//������
							}
							else//�� �� ������ �ڸ��� ����
							{
								put_block(graphic, block_coors, location[0], location[1]);//������
								put_block(graphic, next_block_coors, 7, 24);
								system("cls");
								show_graphic(graphic);//������
								printf("\n���ӿ���.");
								return 0;
							}
						}
						else//�¿찡 ���� ���
						{
							move_coors(location, anti_arrow(key)); //������ ���󺹱�
							put_block(graphic, block_coors, location[0], location[1]);
							system("cls");
							show_graphic(graphic);//�ٽ� ��� ������
						}
					}
				}

			}

			//ȸ��Ű�� �Էµ� ���
			else
			{
				del_block(graphic, block_coors, location[0], location[1]);//���� �����
				spinvalue = spin(spinvalue);//��ȸ������� Ű���
				block_type_to_coors(block_coors, blocktype, spinvalue);//�׿����� ����ǥ���� ��ȯ�� ��
				if (can_put(graphic, block_coors, location))//���� �� �ִٸ�
				{
					put_block(graphic, block_coors, location[0], location[1]);//�����
					system("cls");
					show_graphic(graphic);//�����ֱ�
				}
				else //���� �� ���ٸ�
				{
					spinvalue = anti_spin(spinvalue);//��ȸ������� 1 ���̰�(���󺹱�)
					block_type_to_coors(block_coors, blocktype, spinvalue);
					put_block(graphic, block_coors, location[0], location[1]);//�����
					system("cls");
					show_graphic(graphic);//�����ֱ�
				}

			}
		}

		//�����ð����� ���� ����߸�
		if ((clock() - start) > 1499)
		{
			start = clock();
			del_block(graphic, block_coors, location[0], location[1]);//���� �����
			move_coors(location, 2);//�������� ������
			if (can_put(graphic, block_coors, location))//����� �������� ���� �� �ִٸ�
			{
				put_block(graphic, block_coors, location[0], location[1]);
				system("cls");
				show_graphic(graphic);
			}
			else//����� �������� ���� �� ���ٸ�
			{
				move_coors(location, 0); //������ ���󺹱�
				put_block(graphic, block_coors, location[0], location[1]);//������
				row_clear(graphic);
				location[0] = 4;
				location[1] = 14;//�������� �����Ǵ� ��
				del_block(graphic, next_block_coors, 7, 24);
				coor_to_coor(block_coors, next_block_coors);
				blocktype = next_blocktype;
				spinvalue = next_spinvalue;
				next_blocktype = rand() % 6;
				next_spinvalue = rand() % 4;//�����������Է�
				block_type_to_coors(next_block_coors, next_blocktype, next_spinvalue);//����ǥ �ľ�
				if (can_put(graphic, block_coors, location))//�� ���� ���� �� �ִٸ�
				{
					put_block(graphic, block_coors, location[0], location[1]);//������
					put_block(graphic, next_block_coors, 7, 24);
					system("cls");
					show_graphic(graphic);//������
				}
				else//�� �� ������ �ڸ��� ����
				{
					put_block(graphic, block_coors, location[0], location[1]);//������
					put_block(graphic, next_block_coors, 7, 24);
					system("cls");
					show_graphic(graphic);//������
					printf("\n���ӿ���.");
					return 0;
				}
			}
		}
	}

	//show_graphic(graphic);
	return 0;
}

