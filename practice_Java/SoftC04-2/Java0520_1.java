//Java0520_1クラス
//1~40 の整数のうち、3 の倍数と 3 のつく数字を表示し、さらに表示した数値の合計を求め、結果を表示
public class Java0520_1 {

	public static void main(String[] args) {
		// メインメソッド
		int[] x;//int型のインスタンス配列x
		int sum1 = 0, sum2 = 0;//int型変数sum1,sum2に0を代入
		x = new int[41];//要素数41を確保

		for (int i = 1; i <= 40; i++) {//iを1～40までインクリメント
			x[i] = i;//1～40までx[i]に代入
			if (x[i] % 3 == 0) {//x[i]が3で割り切れる場合3の倍数
				sum1 = sum1 + x[i];//3の倍数の総和を計算
				System.out.println(x[i]);//3の倍数を表示
			}
		}
		System.out.println(sum1);//3の倍数の総和を表示

		System.out.println("\n");//区切り

		for (int j = 1; j <= 40; j++) {//iを1～40までインクリメント
			if ((30 <= x[j] && x[j] <= 39) || (x[j] % 10 == 3)) {
				//x[i]が30以上39以下の時と、10で割った余りが3の時その数値に3が付く
				sum2 = sum2 + x[j];//3の付く数の総和を計算
				System.out.println(x[j]);//3の付く数を表示
			}
		}
		System.out.println(sum2);//3の付く数の総和を表示
	}
}

/*実行結果
3
6
9
12
15
18
21
24
27
30
33
36
39
273


3
13
23
30
31
32
33
34
35
36
37
38
39
384

 */