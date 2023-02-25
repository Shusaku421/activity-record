
//ファイル読み込み用クラス、ファイル書き出し用クラス、入出力例外用クラスをインポート
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;

//SoftC10_2クラス:ファイルの読み込み、昇順ソート、ファイルの書き出し
public class SoftC10_2 {

	public static void main(String[] args) {
		//メインメソッド
		int j = 0;//インクリメント変数
		int[] i = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };//数値代入用配列
		String readData, writeData; // 読み込み用文字列と書き込み用文字列
		BufferedReader buffReader = null; // 読み込み用バッファ
		BufferedWriter buffWriter = null;// 書き込み用バッファ

		try {
			// "math.txt"のFileReaderインスタンスを生成し,それをもとにBufferedReaderインスタンスを生成
			buffReader = new BufferedReader(new FileReader("math.txt"));
			// "Write.txt"のFileWriterインスタンスを生成し,それをもとにBufferedWriterインスタンスを生成
			buffWriter = new BufferedWriter(new FileWriter("Write.txt"));
			//読み込んだString型データをint型へ変換し配列へ代入
			i[j] = Integer.parseInt(readData = buffReader.readLine());
			readData = buffReader.readLine();//次のデータ読み込み
			while (readData != null) { // 読み込みデータがある間繰り返し
				j++;//jをインクリメント
				i[j] = Integer.parseInt(readData);//読み込んだString型データをint型へ変換し配列へ代入
				readData = buffReader.readLine();//次のデータ読み込み
			}

			Arrays.sort(i);//配列に代入したデータを昇順ソート
			for (j = 0; j <= 10; j++) {//10回繰り返す
				writeData = Integer.toString(i[j]);//int型データをStringデータへ
				buffWriter.write(writeData);//上の行で変換したStringデータを書き込み
				buffWriter.newLine();//改行
			}

		} catch (IOException e) { //例外捕捉
			System.out.println("読み込みエラーです");//表示
			System.out.println("書き出しエラーです");
		} finally { // 後処理
			try { // 後処理にも例外が発生する場合がある
				buffReader.close(); //読み込みファイルを閉じる
				buffWriter.flush();//強制書き出し
				buffWriter.close();//書き込みファイルを閉じる
			} catch (Exception e) { //後処理時の例外捕捉
				System.out.println("終了処理エラーです");
			}
		}
	}
}

