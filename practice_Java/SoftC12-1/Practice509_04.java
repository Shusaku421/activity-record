
// Practice509_04クラス:イベント処理の例
import java.awt.BorderLayout; // 1ボーダーレイアウト
import java.awt.Container; // 4表示領域
import java.awt.event.ActionEvent; // 3イベントクラス
import java.awt.event.ActionListener; // 2イベントリスナー

import javax.swing.JButton; //ボタン
import javax.swing.JFrame; //フレーム
import javax.swing.JTextField; //テキストフィールド

public class Practice509_04 extends JFrame implements ActionListener {//JFrameを継承し,ActionListenerを実装
	private Container cntnr; //表示領域
	private JTextField text1; //テキストフィールド
	private JButton button1, button2, button3; //ボタン

	Practice509_04(String title) {//コンストラクタ:窓のタイトル,位置,大きさを設定
		super(title);
		setBounds(200, 200, 200, 150);
	}

	public static void main(String[] args) {
		Practice509_04 frame = new Practice509_04("Practice509_04");//自クラスのインスタンスを生成
		frame.defineVal(); //表示準備
		frame.setVisible(true); //窓表示
	}

	private void defineVal() {//窓を表示する準備
		cntnr = getContentPane(); //表示領域情報取得
		cntnr.setLayout(new BorderLayout());//ボーダーレイアウトに設定

		//各部品インスタンス
		text1 = new JTextField(); //引数無しの時は自動調整
		button1 = new JButton("<<朝>>"); //ボタン1
		button2 = new JButton("<<夜>>"); //ボタン2
		button3 = new JButton("<終了>"); //ボタン3

		//レイアウトに部品を貼り付け
		cntnr.add(text1, BorderLayout.NORTH); //上にテキスト入力
		cntnr.add(button1, BorderLayout.WEST); //左にボタン1
		cntnr.add(button2, BorderLayout.EAST); //右にボタン2
		cntnr.add(button3, BorderLayout.SOUTH); //下にボタン3
		//窓を閉じたときの動作:プログラム終了(デフォルトは窓を閉じる)
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		//三つのボタンにActionListnerを登録
		button1.addActionListener(this);
		button2.addActionListener(this);
		button3.addActionListener(this);
	}

	//ボタンが押されたときの動作設定
	@Override
	public void actionPerformed(ActionEvent e) {//どのボタンからのものか判断し,対応する文字列をテキスト入力に表示
		if (e.getSource() == button1) { //朝ボタン
			text1.setText("おはよう!");
		} else if (e.getSource() == button2) { //夜ボタン
			text1.setText("さようなら");
		} else if (e.getSource() == button3) { //終了ボタン
			System.exit(0);
		}
	}
}