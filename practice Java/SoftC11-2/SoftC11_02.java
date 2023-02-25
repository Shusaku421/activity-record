
//AWTのクラス
import java.awt.BorderLayout;
import java.awt.Container;

//Swingのクラス
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class SoftC11_02 extends JFrame {//JFrameを継承

	private Container cntnr; //フレームの表示領域

	//コンポーネント
	private JTextField text; //テキストフィールド
	private JButton button; //ボタン
	private JLabel label1; //ラベル1
	private JLabel label2; //ラベル2
	private JCheckBox chkBox;//チェックボックス

	SoftC11_02(String title) {//コンストラクタでフレーム設定
		super(title); //タイトルの設定
		setBounds(200, 200, 450, 300); //位置とサイズの設定
		setDefaultCloseOperation(EXIT_ON_CLOSE);//フレームを閉じたらプログラム終了
	}

	public static void main(String[] args) {//メインメソッド
		SoftC11_02 frame = new SoftC11_02("SoftC11_02");//自クラスのインスタンスを生成
		frame.defineVal(); //表示の準備
		frame.setVisible(true); //フレーム表示
	}

	private void defineVal() {//レイアウトやコンポーネントの配置を設定
		cntnr = getContentPane(); //表示領域を取得
		cntnr.setLayout(new BorderLayout());//レイアウト設定
		label1 = new JLabel("ソフトウェア演習Cに関する意見を書いてください");//ラベル1
		label2 = new JLabel("意見");//ラベル2
		button = new JButton("OK");//ボタン
		chkBox = new JCheckBox("確認", false);//チェックボックス
		text = new JTextField();//テキストボックス

		//各部品を表示領域に追加
		cntnr.add(label1, BorderLayout.NORTH);//ラベル1を上部に設置
		cntnr.add(label2, BorderLayout.WEST);//ラベル2を左部に設置
		cntnr.add(text, BorderLayout.CENTER);//テキストボックスを中央に設置
		cntnr.add(chkBox, BorderLayout.EAST);//チェックボックスを右部に設置
		cntnr.add(button, BorderLayout.SOUTH);//ボタンを下部に設置
	}

}
