
//AWTクラス
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.List;

//Swingクラス
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

//し
public class SoftC13prac extends JFrame implements ActionListener {
	List<String[]> list;//csvデータリスト
	String[] line_data;//csvファイル行単位のデータ
	String[] Str_data;//csvデータ配列(line_dataを,で区切ったデータ)
	int[] val;
	int i = 0;

	private Container cntnr; //フレームの表示領域
	private JTextField t1, t2, t3, t4, t5, t6;//テキストフィールド
	private JButton sah, back, next, save; //ボタン
	private JLabel word, tte, atr, cpy, year, isbn, rlt; //ラベル

	SoftC13prac(String title) {//コンストラクタでフレーム設定
		super(title); //タイトルの設定
		setBounds(200, 200, 450, 300); //位置とサイズの設定
		setDefaultCloseOperation(EXIT_ON_CLOSE);//フレームを閉じたらプログラム終了
	}

	public static void main(String[] args) {//メインメソッド
		SoftC13prac frame = new SoftC13prac("SoftC13prac");//自クラスのインスタンスを生成
		Booklist booklist=new Booklist();
		frame.defineVal(); //表示の準備
		frame.setVisible(true); //フレーム表示
	}

//	private void readcsv() {
//		String readData; // 読み込み用文字列と書き込み用文字列
//		BufferedReader br = null; // 読み込み用バッファ
//		list = new ArrayList<String[]>();//リスト
//		Str_data = new String[4][5];//配列
//		line_data = new String[4];
//		int i = 0, j = 0;//インクリメント変数
//
//		try {
//			// "booklist.csv"のFileReaderインスタンスを生成し,それをもとにBufferedReaderインスタンスを生成
//			br = new BufferedReader(new FileReader("booklist.csv"));
//			while ((readData = br.readLine()) != null) { // 読み込みデータがある間繰り返し
//				line_data[i] = readData;
//				list.add(readData.split(","));//読み込んだデータを,で区切ってlistに追加
//				i++;
//			}
//
//			for (String[] list_data : list) {
//				for (i = 0; i < list_data.length; i++) {
//					Str_data[j][i] = list_data[i];
//				}
//				j++;
//			}
//
//		} catch (IOException e) { //例外捕捉
//			System.out.println("読み込みエラーです");//表示
//		} finally { // 後処理
//			try { // 後処理にも例外が発生する場合がある
//				br.close(); //読み込みファイルを閉じる
//			} catch (Exception e) { //後処理時の例外捕捉
//				System.out.println("終了処理エラーです");
//			}
//		}
//	}

	private void defineVal() {//窓を表示する準備
		cntnr = getContentPane(); //表示領域を取得
		cntnr.setLayout(null);//レイアウト設定

		//コンポーネントインスタンス
		t1 = new JTextField(50); //テキストフィールド(検索語)インスタンス
		t1.setBounds(70, 13, 295, 18);//配置位置
		t2 = new JTextField(50); //テキストフィール(タイトル)ドインスタンス
		t2.setBounds(75, 78, 350, 18);//配置位置
		t3 = new JTextField(50); //テキストフィール(著者)ドインスタンス
		t3.setBounds(70, 110, 350, 18);//配置位置
		t4 = new JTextField(50); //テキストフィールド(出版社)インスタンス
		t4.setBounds(75, 145, 350, 18);//配置位置
		t5 = new JTextField(50); //テキストフィールド(出版年)インスタンス
		t5.setBounds(75, 180, 350, 18);//配置位置
		t6 = new JTextField(50); //テキストフィールド(ISBN)インスタンス
		t6.setBounds(70, 210, 350, 18);//配置位置

		sah = new JButton("検索"); //検索ボタンインスタンス
		sah.setBounds(370, 5, 60, 30);//配置位置
		back = new JButton("<"); //<ボタンインスタンス
		back.setBounds(120, 235, 50, 25);//配置位置
		next = new JButton(">"); //>ボタンインスタンス
		next.setBounds(173, 235, 50, 25);//配置位置
		save = new JButton("検索結果保存"); //保存ボタンインスタンス
		save.setBounds(226, 235, 110, 25);//配置位置

		word = new JLabel("検索語：");//ラベル(検索語)インスタンス
		word.setBounds(15, 15, 55, 15);//配置位置
		tte = new JLabel("タイトル：");//ラベル(タイトル)インスタンス
		tte.setBounds(15, 80, 60, 15);//配置位置
		atr = new JLabel("著者：");//ラベル(著者)インスタンス
		atr.setBounds(15, 110, 60, 15);//配置位置
		cpy = new JLabel("出版社：");//ラベル(出版社)インスタンス
		cpy.setBounds(15, 145, 60, 15);//配置位置
		year = new JLabel("出版年：");//ラベル(出版年)インスタンス
		year.setBounds(15, 180, 60, 15);//配置位置
		isbn = new JLabel("ISBN：");//ラベル(ISBN)インスタンス
		isbn.setBounds(15, 210, 60, 15);//配置位置
		rlt = new JLabel("結果：");//ラベル(結果)インスタンス
		rlt.setBounds(15, 45, 60, 30);//配置位置

		//コンポーネントの追加
		cntnr.add(t1);
		cntnr.add(t2);
		cntnr.add(t3);
		cntnr.add(t4);
		cntnr.add(t5);
		cntnr.add(t6);
		cntnr.add(sah);
		cntnr.add(back);
		cntnr.add(next);
		cntnr.add(save);
		cntnr.add(word);
		cntnr.add(tte);
		cntnr.add(atr);
		cntnr.add(cpy);
		cntnr.add(year);
		cntnr.add(isbn);
		cntnr.add(rlt);
		//窓を閉じたときの動作:プログラム終了(デフォルトは窓を閉じる)
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		//各ボタンをリスナー追加
		sah.addActionListener(this);
		back.addActionListener(this);
		next.addActionListener(this);
		save.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {//イベント
		String v,nv,bv;
		int cnt = 0;//インクリメント変数

		if (e.getSource() == sah) { //検索ボタンが押されたら
			Booklist inst1=new Booklist();
//			val = new int[line_data.length];//フラグ
//			for (cnt = 0; cnt < line_data.length; cnt++) {//valの初期化
//				val[cnt] = -1;
//			}
			String gStr = t1.getText();//検索語に何が入力された？
//検索語に何かが入っている
				//csvファイル(booklist.csv)を行単位で全て調査
//				for (i = 0; i < line_data.length; i++) {
//					int index = line_data[i].indexOf(gStr);//line_data[i]にgStrはある？
//					if (index != -1) {//ある場合
//						val[i] = 1;//フラグを立てる
//					} else {//ない場合
//						val[i] = -1;//フラグをそのまま
//					}
//				}
//
//				i = 0;//配列のはじめから
//				if (val[i] == -1) {//適したデータない場合
//					while (val[i] == -1) {//適したデータと出会うまで
//						i++;//インクリメント
//					}
//				}
				v=inst1.get(gStr);
					String[] Str_data=v.split(",");
				//1件目を表示(csvファイルの上の行から)
				t2.setText(Str_data[0]);
				t3.setText(Str_data[1]);
				t4.setText(Str_data[2]);
				t5.setText(Str_data[3]);
				t6.setText(Str_data[4]);
		}

//		if (e.getSource() == next) {//＞ボタンが押されたら
//			cnt = i + 1;//cntにi+1を代入
//			if (cnt == line_data.length) {//上の処理の結果cntがline_data.lengthなら
//				cnt = 0;//cntを0へ
//			}
//			if (val[cnt] != 1) {//適したデータない場合
//				while (val[cnt] != 1) {//適したデータと出会うまで
//					cnt++;//インクリメント
//					if (cnt > (line_data.length - 1)) {//途中で配列の範囲より大きくなったら
//						cnt = 0;//cntを0へ
//					}
//				}
//			}
//			i = cnt;//cntをiに戻す
//			//次のデータを表示
//			t2.setText(Str_data[i][0]);
//			t3.setText(Str_data[i][1]);
//			t4.setText(Str_data[i][2]);
//			t5.setText(Str_data[i][3]);
//			t6.setText(Str_data[i][4]);
//		}
//
//		if (e.getSource() == back) {//＜ボタンが押されたら
//			cnt = i - 1;//cntにi-1を代入
//			if (cnt == -1) {//上の処理の結果cntが-1なら
//				cnt = line_data.length - 1;//一番後ろのデータへ
//			}
//			if (val[cnt] != 1) {//適したデータない場合
//				while (val[cnt] != 1) {//適したデータと出会うまで
//					cnt--;//デクリメント
//					if (cnt < 0) {//途中で配列の範囲より小さくなったら
//						cnt = line_data.length - 1;//cntをline_data.length - 1へ
//					}
//				}
//			}
//			i = cnt;//cntをiに戻す
//			//前のデータを表示
//			t2.setText(Str_data[i][0]);
//			t3.setText(Str_data[i][1]);
//			t4.setText(Str_data[i][2]);
//			t5.setText(Str_data[i][3]);
//			t6.setText(Str_data[i][4]);
//		}
//
//		if (e.getSource() == save) {//保存ボタンが押されたら
//			// データをファイルへ書き出し
//			try {
//				// "booklist.csv"のFileReaderインスタンスを生成し,それをもとにBufferedReaderインスタンスを生成
//				PrintWriter fout = new PrintWriter(new BufferedWriter(new FileWriter("result.csv")));
//				fout.println(Str_data[i][0] + "," + Str_data[i][1] + "," + Str_data[i][2] + "," + Str_data[i][3] + ","
//						+ Str_data[i][4]);
//				fout.flush();//強制書き出し
//				fout.close();//書き込みファイルを閉じる
//			} catch (Exception e1) { //後処理時の例外捕捉
//				System.out.println("終了処理エラーです");
//			}
//		}
	}
}