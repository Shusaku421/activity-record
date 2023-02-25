import java.util.Arrays;//Arraysクラスをインポート
//Java0520_2クラス：以下のデータについて、平均値、分散、標準偏差、最大値、最小値、中央値を求める

public class Java0520_2 {

	public static void main(String[] args) {
		// メインメソッド
		int[] x = { 30, 72, 45, 20, 30, 30, 38, 50, 119, 37, 48, 47, 67, 75, 30, 20, 47, 30, 70, 33, 40, 20, 30, 46, 30,
				40 };//int型のインスタンス配列xを定義
		int i, sum = 0, max = 0, min = 100;//int型,インスタンス変数i,合計値sum=0,最大値max=0,最小値min=100を定義
		double sd = 0, var = 0, ave = 0, med = 0;//double型,標準偏差sd=0,分散var=0,平均ave=0,中央値med=0を定義

		Arrays.sort(x);//データxを昇順ソート
		int m = x.length / 2;//データの中間の値をmへ代入
		med = (x[m - 1] + x[m]) / 2.0;//中央値計算

		for (i = 0; i <= 25; i++) {//iを0～25までインクリメント
			sum = sum + x[i];//合計値計算
			if (max < x[i]) {//最大値より大きい？
				max = x[i];//大きかったら最大値へ代入
			}
			if (min > x[i]) {//最小値より小さい？
				min = x[i];//小さかったら最小値へ代入
			}
		}
		ave = sum / 26;//平均値計算

		for (i = 0; i <= 25; i++) {//iを0～25までインクリメント
			var = var + (x[i] - ave) * (x[i] - ave);//（各値-平均）の2乗の合計値代入
		}
		var = var / 26;//分散計算
		sd = (Math.sqrt(var));//√分散＝標準偏差計算

		System.out.println(max);//最大値表示
		System.out.println(min);//最小値表示
		System.out.println(ave);//平均値表示
		System.out.println(var);//分散表示
		System.out.println(sd);//標準偏差表示
		System.out.println(med);//中央値表示
	}
}

/*実行結果
1144
119
20
44.0
461.0769230769231
21.472701811298062
39.0
 */
