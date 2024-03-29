#include<stdio.h>

typedef struct data {
	char pn[8];/*都道府県名*/
	int  tp_m;/*総人口（男）*/
	int  tp_w;/*総人口（女）*/
	int  p_u15_m;/*15歳未満人口（男)*/
	int  p_u15_w;/*15歳未満人口（女）*/
	int  p_15_64_m;/*15〜64歳人口（男）*/
	int  p_15_64_w;/*15〜64歳人口（女）*/
	int  p_o65_m;/*65歳以上人口（男）*/
	int  p_o65_w;/*65歳以上人口（女）*/
	double avt;/*年平均気温*/
	double ht;/*最高気温*/
	double lt;/*最低気温*/
	int sd;/*快晴日数*/
	int rd;/*降水日数*/
	int snd;/*降雪日数*/
	double dh;/*日照時間*/
	double p;/*降水量*/
}data;

void all_total(data *d) {
	int spu=0, sp=0, spo=0,j=0, i;
		for (i = 0; i <= 46; i++) {
			spu = spu+ d->p_u15_m + d->p_u15_w;
			sp= sp+d->p_15_64_m + d->p_15_64_w;
			spo= spo+d->p_o65_m + d->p_o65_w;
			d++;
		}
		printf("全国の15歳未満の人口の合計=%d\n", spu);
		printf("全国の15歳以上64歳未満の人口の合計=%d\n", sp);
		printf("全国の65歳以上の人口の合計=%d\n", spo);
		printf("全国の総人口合計=%d\n", spu+sp+spo);
}

void f_write(const char *rf,const  char *wf) {
	int txt;
	FILE *x = fopen(rf, "rb");
	FILE *y = fopen(wf, "wb");
	printf("ファイル%sの内容をファイル%sに書き込み\n", rf, wf);
	if (x == NULL || y==NULL) {
		printf("入力ファイルが開けません\n");
	}
	while ((txt=fgetc(x))!=EOF) {
		fputc(txt,y);
	}
	fclose(x);
	fclose(y);
}

void temp(data *t) {
	int i;  double havt=0,lavt=11.6,ht = 0,lt=0;
	char *a=&havt,*b=&lavt,*c=&ht,*d=&lt;
	for (i = 0; i <= 46; i++) {
		if (havt < t->avt) {
			havt = t->avt;
			a = t->pn;
		}
		if (lavt > t->avt) {
			lavt = t->avt;
			 b= t->pn;
		}
		if (ht < t->ht) {
			ht = t->ht;
			c = t->pn;
		}
		if (lt > t->lt) {
			lt = t->lt;
			d = t->pn;
		}
		t++;
	}
	printf("平均気温が一番高い都道府県は%sで%.1f°\n", a,havt);
	printf("平均気温が一番低い都道府県は%sで%.1f°\n", b,lavt);
	printf("最高気温が一番高い都道府県は%sで%.1f°\n", c, ht);
	printf("最低気温が一番低い都道府県は%sで%.1f°\n", d, lt);
}

void ctf(const char*fv) {
	char fiv[1024];
	FILE* v = fopen(fv, "r");
	if (v== NULL) {
		printf("ファイル%sが開けませんでした\n",fv);
	}
	else {
		printf("ファイル%sの内容を表示。内容を確認してください\n", fv);
			while ((fgets(fiv, 256, v)) != NULL) {
					printf("%s", fiv);
			}
	}
	fclose(v);
	return 0;
}

int main(void) {
	int j=0,n=1;
	const char* f1, * f2, * f3, rf[50] = { 0 }, wf[50] = { 0 }, fv[50] = {0};
	FILE *fp;
	data d[47],*dp;
	dp = d;
		if ((fp = fopen("13data.txt", "r")) == NULL) {
			printf("ファイル13data.txtが開けませんでした\n");
		}
		else {
				while (fscanf(fp, "%s%d%d%d%d%d%d%d%d%lf%lf%lf%d%d%d%lf%lf", d[j].pn, &d[j].tp_m, &d[j].tp_w, &d[j].p_u15_m, &d[j].p_u15_w, &d[j].p_15_64_m, &d[j].p_15_64_w,
					&d[j].p_o65_m, &d[j].p_o65_w, &d[j].avt,&d[j].ht, &d[j].lt, &d[j].sd, &d[j].rd, &d[j].snd, &d[j].dh, &d[j].p) == 17) {
					j++;
				}
				while (n != 0) {
			printf("\n操作受付\n");
			printf("入力0：操作終了\n入力1：年齢別総人口と全国総人口\n入力2:ファイルコピー\n");
			printf("入力3:平均気温が一番高い,平均気温が一番低い,最高気温が一番高い,最低気温が一番低い都道府県をそれぞれ表示\n入力4:ファイルの内容を確認\n");
				printf("数値の入力:");
					scanf("%d", &n);
					if (n == 1) {
						all_total(&d);
					}
					if (n == 2) {
						printf("入力(コピー元)ファイル名を入力:");
						scanf("%s", rf);
						printf("出力(コピー先)ファイル名を入力:");
						scanf("%s", wf);
						f1 = &rf;
						f2 = &wf;
						f_write(f1, f2);
					}
					if (n == 3) {
						temp(&d);
					}
					if (n == 4) {
						fclose(fp);
						printf("内容を確認したいファイル名を入力:");
						scanf("%s", fv);
						f3 = &fv;
						ctf(f3);
					}
				}
		}
		fclose(fp);
		printf("操作を終了しファイルを閉じました\n");
		return 0;
	}

/*実行結果

操作受付
入力0：操作終了
入力1：年齢別総人口と全国総人口
入力2:ファイルコピー
入力3:平均気温が一番高い,平均気温が一番低い,最高気温が一番高い,最低気温が一番低い都道府県をそれぞれ表示
入力4:ファイルの内容を確認
数値の入力:1
全国の15歳未満の人口の合計=15418000
全国の15歳以上64歳未満の人口の合計=75450000
全国の65歳以上の人口の合計=35582000
全国の総人口合計=126450000

操作受付
入力0：操作終了
入力1：年齢別総人口と全国総人口
入力2:ファイルコピー
入力3:平均気温が一番高い,平均気温が一番低い,最高気温が一番高い,最低気温が一番低い都道府県をそれぞれ表示
入力4:ファイルの内容を確認
数値の入力:2
入力(コピー元)ファイル名を入力:13data.txt
出力(コピー先)ファイル名を入力:rewrite.txt
ファイル13data.txtの内容をファイルrewrite.txtに書き込み

操作受付
入力0：操作終了
入力1：年齢別総人口と全国総人口
入力2:ファイルコピー
入力3:平均気温が一番高い,平均気温が一番低い,最高気温が一番高い,最低気温が一番低い都道府県をそれぞれ表示
入力4:ファイルの内容を確認
数値の入力:3
平均気温が一番高い都道府県は沖縄県で23.5°
平均気温が一番低い都道府県は北海道で9.5°
最高気温が一番高い都道府県は熊本県で35.6°
最低気温が一番低い都道府県は北海道で-7.6°

操作受付
入力0：操作終了
入力1：年齢別総人口と全国総人口
入力2:ファイルコピー
入力3:平均気温が一番高い,平均気温が一番低い,最高気温が一番高い,最低気温が一番低い都道府県をそれぞれ表示
入力4:ファイルの内容を確認
数値の入力:4
内容を確認したいファイル名を入力:rewrite.txt
ファイルrewrite.txtの内容を表示。内容を確認してください
北海道 2489000 2797000 295000 282000 1502000 1551000 692000 964000 9.5 25.7 -7.6 10 157 131 1741.60 1282.00
青森県 594000 670000 70000 67000 355000 359000 169000 243000 11 27.4 -5.1 8 172 117 1642.00 1553.00
岩手県 598000 643000 72000 68000 356000 341000 170000 234000 11 29.4 -6.9 8 120 106 1778.10 1322.00
宮城県 1132000 1184000 142000 135000 709000 687000 281000 362000 13.6 29.7 -2.2 20 106 63 1998.40 1082.00
秋田県 461000 520000 50000 48000 264000 262000 147000 210000 12.3 29.2 -4 9 168 101 1526.20 2016.50
山形県 526000 565000 65000 62000 307000 299000 154000 204000 12.6 32.8 -4.7 8 137 89 1765.00 1124.00
福島県 923000 941000 111000 105000 559000 513000 253000 323000 14.2 33.4 -2.4 14 101 73 1915.70 828
茨城県 1435000 1442000 179000 170000 881000 815000 376000 457000 15.3 31.9 -2.4 44 106 10 2199.10 1282.50
栃木県 969000 977000 123000 117000 602000 558000 244000 302000 15.2 32.8 -2.8 28 101 17 2156.30 1257.00
群馬県 965000 987000 121000 115000 589000 552000 255000 320000 16.1 33.9 -0.7 34 94 16 2381.30 1046.50
埼玉県 3658000 3672000 456000 434000 2326000 2178000 875000 1059000 16.4 34.5 -1.2 47 86 4 2308.30 1056.00
千葉県 3105000 3150000 383000 364000 1943000 1842000 778000 944000 17.2 32.2 1.8 30 96 17 2120.20 1261.00
東京都 6802000 7020000 792000 758000 4630000 4453000 1380000 1808000 16.8 32.7 0.6 34 103 11 2112.20 1445.50
神奈川県 4576000 4601000 569000 542000 2979000 2782000 1028000 1277000 17.1 32.2 2.1 34 104 6 2194.60 1573.50
新潟県 1088000 1157000 134000 126000 647000 623000 308000 408000 14.3 31.7 -1.6 12 173 79 1698.80 1795.50
富山県 510000 541000 63000 59000 304000 289000 143000 193000 15 32.8 -1 16 179 64 1799.50 2751.00
石川県 555000 589000 73000 70000 339000 328000 143000 191000 15.5 32.9 -0.1 17 185 59 1880.70 2765.50
福井県 376000 398000 51000 48000 224000 217000 101000 133000 15.3 33.7 -1.6 22 175 60 1844.40 2632.00
山梨県 400000 417000 50000 47000 242000 231000 109000 139000 16 34.5 -2.8 38 84 6 2391.30 1153.50
長野県 1006000 1057000 131000 124000 590000 567000 285000 365000 13 32.8 -4.6 21 110 73 2121.90 886
岐阜県 968000 1029000 130000 123000 577000 571000 261000 334000 16.9 35.1 -0.1 43 114 28 2277.80 2087.00
静岡県 1803000 1856000 234000 222000 1092000 1031000 478000 604000 17.7 32.7 1.3 64 106 2 2208.70 2442.00
愛知県 3770000 3767000 513000 489000 2420000 2239000 837000 1039000 16.9 35.3 0.2 37 111 17 2330.60 1695.50
三重県 874000 917000 113000 109000 531000 511000 230000 297000 16.9 33.2 1.2 45 108 20 2325.90 1720.00
滋賀県 697000 715000 101000 96000 434000 418000 162000 201000 15.7 33.6 -0.4 26 127 33 2060.40 1863.00
京都府 1238000 1353000 156000 148000 762000 777000 321000 428000 16.9 35 0.4 21 107 24 1981.80 1770.00
大阪府 4232000 4581000 540000 516000 2643000 2693000 1048000 1372000 17.4 34.6 1.8 29 96 12 2265.60 1651.50
兵庫県 2614000 2870000 350000 333000 1583000 1641000 682000 896000 17.4 32.7 2.1 26 97 19 2247.50 2037.50
奈良県 631000 708000 82000 79000 369000 396000 180000 233000 16.2 34.4 -0.2 28 110 17 2065.20 1646.50
和歌山県 440000 495000 56000 53000 255000 265000 129000 177000 17.3 33.2 1.9 28 94 19 2288.80 1950.50
鳥取県 268000 293000 36000 35000 157000 155000 74000 103000 15.7 34.4 -0.9 22 152 48 1825.70 2183.50
島根県 328000 352000 43000 41000 187000 178000 98000 133000 15.6 33.7 -0.7 23 148 43 1851.10 1976.50
岡山県 912000 986000 124000 116000 544000 543000 245000 326000 16.3 34.7 -0.9 38 84 16 2229.20 1410.00
広島県 1367000 1450000 186000 178000 830000 807000 352000 466000 16.8 34.7 1 37 81 32 2181.50 1878.50
山口県 650000 720000 83000 79000 373000 372000 195000 270000 16 35.2 -0.9 34 108 47 2025.00 1939.50
徳島県 351000 385000 43000 40000 203000 206000 105000 139000 17.1 33.1 1.5 35 106 12 2289.90 1760.00
香川県 466000 496000 61000 58000 273000 267000 132000 171000 17 34.4 0.9 26 94 22 2248.10 1575.00
愛媛県 639000 713000 83000 79000 371000 378000 185000 255000 17.1 34.4 1.7 33 90 22 2172.20 1796.50
高知県 333000 373000 40000 39000 190000 191000 103000 143000 17.4 32.8 0.9 42 114 3 2265.00 3092.50
福岡県 2416000 2691000 345000 329000 1483000 1543000 589000 819000 17.7 34.5 2.7 34 111 28 2094.80 1617.00
佐賀県 388000 432000 57000 54000 228000 235000 102000 142000 17.4 35.3 1 41 105 20 2133.70 1877.00
長崎県 631000 710000 88000 83000 364000 377000 179000 250000 17.7 33.6 2.5 31 107 21 1994.40 1821.00
熊本県 829000 928000 120000 115000 483000 502000 226000 311000 17.5 35.6 0.5 37 100 19 2089.90 1950.50
大分県 542000 602000 72000 69000 314000 318000 156000 215000 17.1 33.9 1.5 34 101 14 2143.30 1663.00
宮崎県 509000 572000 74000 71000 290000 304000 145000 197000 17.8 31.6 2.4 67 131 2 2191.90 3167.50
鹿児島県 758000 856000 111000 105000 433000 460000 215000 292000 19 33.6 3.7 34 114 9 2051.20 2397.00
沖縄県 712000 736000 126000 121000 446000 442000 140000 173000 23.5 31.2 14.4 5 128 0 1876.50 2469.50
操作受付
入力0：操作終了
入力1：年齢別総人口と全国総人口
入力2:ファイルコピー
入力3:平均気温が一番高い,平均気温が一番低い,最高気温が一番高い,最低気温が一番低い都道府県をそれぞれ表示
入力4:ファイルの内容を確認
数値の入力:0
操作を終了しファイルを閉じました

C:\Users\MrBlu\OneDrive\デスクトップ\授業資料\1年後期\ソフトウェア演習B（金曜２）\20201218\Project1\Debug\Project7.exe (プロセス 7740) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/
