
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class Booklist {
	List<String[]> list;//csvデータリスト
	static String[] line_data;//csvファイル行単位のデータ
	String[][] Str_data;//csvデータ配列(line_dataを,で区切ったデータ)
	static int[] val;
	static int cnt = 0;
	int i = 0;

	public void readcsv() {
		String readData; // 読み込み用文字列と書き込み用文字列
		BufferedReader br = null; // 読み込み用バッファ
		list = new ArrayList<String[]>();//リスト
		Str_data = new String[4][5];//配列
		line_data = new String[4];
		int i = 0, j = 0;//インクリメント変数

		try {
			// "booklist.csv"のFileReaderインスタンスを生成し,それをもとにBufferedReaderインスタンスを生成
			br = new BufferedReader(new FileReader("booklist.csv"));
			while ((readData = br.readLine()) != null) { // 読み込みデータがある間繰り返し
				line_data[i] = readData;
				list.add(readData.split(","));//読み込んだデータを,で区切ってlistに追加
				i++;
			}
			for (String[] list_data : list) {
				for (i = 0; i < list_data.length; i++) {
					Str_data[j][i] = list_data[i];
				}
				j++;
			}

		} catch (IOException e) { //例外捕捉
			System.out.println("読み込みエラーです");//表示
		} finally { // 後処理
			try { // 後処理にも例外が発生する場合がある
				br.close(); //読み込みファイルを閉じる
			} catch (Exception e) { //後処理時の例外捕捉
				System.out.println("終了処理エラーです");
			}
		}
	}

	public String get(String str) {
		val = new int[4];//フラグ
		for (cnt = 0; cnt < line_data.length; cnt++) {//valの初期化
			val[cnt] = -1;
		}
		//csvファイル(booklist.csv)を行単位で全て調査
		for (i = 0; i < line_data.length; i++) {
			int index = line_data[i].indexOf(str);//line_data[i]にgStrはある？
			if (index != -1) {//ある場合
				val[i] = 1;//フラグを立てる
			} else {//ない場合
				val[i] = -1;//フラグをそのまま
			}
		}

		i = 0;//配列のはじめから
		if (val[i] == -1) {//適したデータない場合
			while (val[i] == -1) {//適したデータと出会うまで
				i++;//インクリメント
			}
		}
		return line_data[i];
	}

	public int next() {
		if (cnt == line_data.length) {//上の処理の結果cntがline_data.lengthなら
			cnt = 0;//cntを0へ
		}
		if (val[cnt] != 1) {//適したデータない場合
			while (val[cnt] != 1) {//適したデータと出会うまで
				cnt++;//インクリメント
				if (cnt > (line_data.length - 1)) {//途中で配列の範囲より大きくなったら
					cnt = 0;//cntを0へ
				}
			}
		}
		cnt=cnt-1;
		i = cnt;//cntをiに戻す
		//次のデータを表示
		return i;
	}

	public int back() {
		if (cnt == -1) {//上の処理の結果cntが-1なら
			cnt = line_data.length - 1;//一番後ろのデータへ
		}
		if (val[cnt] != 1) {//適したデータない場合
			while (val[cnt] != 1) {//適したデータと出会うまで
				cnt--;//デクリメント
				if (cnt < 0) {//途中で配列の範囲より小さくなったら
					cnt = line_data.length - 1;//cntをline_data.length - 1へ
				}
			}
		}
		i = cnt;//cntをiに戻す
		return i;
	}

	public void writerbook(String[][] ws1, String[][] ws2, String[][] ws3, String[][] ws4, String[][] ws5) {// データをファイルへ書き出し
		try {
			// "booklist.csv"のFileReaderインスタンスを生成し,それをもとにBufferedReaderインスタンスを生成
			PrintWriter fout = new PrintWriter(new BufferedWriter(new FileWriter("result.csv")));
			fout.println(ws1[i][0] + "," + ws2[i][1] + "," + ws3[i][2] + "," + ws4[i][3] + "," + ws5[i][4]);
			fout.flush();//強制書き出し
			fout.close();//書き込みファイルを閉じる
		} catch (Exception e1) { //後処理時の例外捕捉
			System.out.println("終了処理エラーです");
		}
	}
}
