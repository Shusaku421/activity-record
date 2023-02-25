
/* �K�E�X�̏����@�i�s�{�b�g�I���j*/
#include<stdio.h>
#include<math.h>

#define N 3  /* �s��̑傫�� */
main()
{
    int i, j, k, p;
    double a[N][N] = { {4,2,6},{1,1,2},{11,7,1} },
        b[N] = { 32,10,77 }, w[N];
    double pmax, s;

    /* �O�i�����i�s�{�b�g�I���j*/

    for (k = 0; k < N - 1; k++) {  /* �悋�X�e�b�v */
        p = k;
        pmax = fabs(a[k][k]);
        for (i = k + 1; i < N; i++) {  /* �s�{�b�g�I�� */
            if (fabs(a[i][k]) > pmax) {
                p = i;
                pmax = fabs(a[i][k]);
            }
        }

        /* �G���[�����F�s�{�b�g�����܂�ɏ��������̓��b�Z�[�W��\�����ďI���@*/
        if (fabs(pmax) < 1.0e-12) {
            printf("too small pivot! \n");
            return(0);
        }
        if (p != k) {  /* �悋�s�Ƒ悐�s�̌����@*/
            for (i = k; i < N; i++) {
                /* �W���s��@*/
                s = a[k][i];
                a[k][i] = a[p][i];
                a[p][i] = s;
            }
            /* ���m�x�N�g�� */
            s = b[k];
            b[k] = b[p];
            b[p] = s;
        }
        /* �O�i���� */
        for (i = k + 1; i < N; i++) { /* �悉�s */
            w[i] = a[i][k] / a[k][k];
            a[i][k] = 0.0;
            /* �悋�s��-a[i][k]/a[k][k]�{���āA�悉�s�ɉ����� */
            for (j = k + 1; j < N; j++) {
                a[i][j] = a[i][j] - a[k][j] * w[i];
            }
            b[i] = b[i] - b[k] * w[i];
        }
    }
    /* ��ޑ�� */
    for (i = N - 1; i >= 0; i--) {
        for (j = i + 1; j < N; j++) {
            b[i] = b[i] - a[i][j] * b[j];
            a[i][j] = 0.0;
        }
        b[i] = b[i] / a[i][i];
        a[i][i] = 1.0;
    }
    /* ���̕\�� */
    for (i = 0; i < N; i++) {
        printf("x[%2d] = %12.8lf\n", i + 1, b[i]);
    }
    return(0);
}