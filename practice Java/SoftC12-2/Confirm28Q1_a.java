
import java.awt.Container; // 表示領域
import java.awt.FlowLayout; //フローレイアウト
import java.awt.event.ActionEvent; //イベントクラス
import java.awt.event.ActionListener; //イベントリスナー
import java.awt.event.ItemEvent;//アイテムクラス
import java.awt.event.ItemListener;//アイテムリスナー

import javax.swing.ButtonGroup;//ボタングループ
import javax.swing.JButton; //ボタン
import javax.swing.JFrame; //フレーム
import javax.swing.JLabel;//ラベル
import javax.swing.JRadioButton;//ラジオボタン
import javax.swing.JTextField; //テキストフィールド

//JFrameを継承し,ActionListener,ItemListenerを実装
public class Confirm28Q1_a extends JFrame implements ActionListener, ItemListener {
	private FlowLayout flow;//レイアウト領域
	private JTextField text; //テキストフィールド
	private JButton button; //ボタン
	private JLabel label;//ラベル
	private ButtonGroup btngrp;//ボタングループ
	private JRadioButton rbtn1, rbtn2, rbtn3;//ラジオボタン
	private Container cntnr; //表示領域
	static String str;//ラジオボタン格納

	Confirm28Q1_a(String title) {//コンストラクタ:窓のタイトル,位置,大きさを設定
		super(title);
		setBounds(200, 200, 360, 250);
	}

	public static void main(String[] args) {
		Confirm28Q1_a frame = new Confirm28Q1_a("Practice509_04");//自クラスのインスタンスを生成
		frame.defineVal(); //表示準備
		frame.setVisible(true); //窓表示
	}

	private void defineVal() {//窓を表示する準備
		cntnr = getContentPane(); //表示領域を取得
		flow = new FlowLayout(); //設定するレイアウトのインスタンス
		cntnr.setLayout(flow); //レイアウトをフローレイアウト

		//各部品インスタンス
		text = new JTextField(25); //テキストフィールドインスタンス
		button = new JButton("どれか選択してから決定"); //ボタンインスタンス
		label = new JLabel("今日の夕食は何にする？");//ラベルインスタンス
		btngrp = new ButtonGroup();//ボタングループインスタンス
		rbtn1 = new JRadioButton("定食", false); //ラジオボタン1
		btngrp.add(rbtn1); //グループに追加登録
		rbtn2 = new JRadioButton("ハンバーガー", false); //ラジオボタン2
		btngrp.add(rbtn2); //グループに追加登録
		rbtn3 = new JRadioButton("ラーメン", false); //ラジオボタン3
		btngrp.add(rbtn3); //グループに追加登録

		//レイアウトに部品を貼り付け
		cntnr.add(rbtn1);
		cntnr.add(rbtn2);
		cntnr.add(rbtn3);
		cntnr.add(label);
		cntnr.add(button);
		cntnr.add(text);
		//窓を閉じたときの動作:プログラム終了(デフォルトは窓を閉じる)
		setDefaultCloseOperation(EXIT_ON_CLOSE);

		//リスナー追加
		button.addActionListener(this);
		rbtn1.addItemListener(this);
		rbtn2.addItemListener(this);
		rbtn3.addItemListener(this);
	}

	//ボタンが押されたときの動作設定
	public void itemStateChanged(ItemEvent e) {
		str = ((JRadioButton) e.getItemSelectable()).getText();//リスナー内でどのラジオボタンが選択洗濯されたのか
		text.setText(str + "がいいかなぁ？");//テキストフィールド表示
	}

	public void actionPerformed(ActionEvent e) {//どのボタンからのものか判断し,対応する文字列をテキスト入力に表示
		if (e.getSource() == button) { //ボタン
			if (str != null) {//既にラジオボタンが選択されている場合
				text.setText("よし、" + str + "に決定！");
			} else {//ラジオボタンが選択されていない場合
				text.setText("あれ？決まってないよ？");
			}
		}
	}
}