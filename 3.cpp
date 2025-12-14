

float Get_v(const std::string& num) {
	float val = 0.0f, dec_w = 0.1f;
	bool is_dec = false;
	int sign = 1, i = 0;
	if (num[i] == '-') { sign = -1; i++; }
	for (; i < num.size() && num[i] >= '0' && num[i] <= '9'; i++)
		val = val * 10 + (num[i] - '0');
	if (i < num.size() && num[i] == '.') { is_dec = true; i++; }
	for (; i < num.size() && num[i] >= '0' && num[i] <= '9'; i++) {
		val += (num[i] - '0') * dec_w;
		dec_w *= 0.1f;
	}
	return val * sign;
}



int k = -1, fd = 0;
string str;
getline(string, str);
for (int i == 0;i < nn;i++) {
	if (s[i].gh == str[i] || s[i].name == str) {
		fd = 1;
		k = i;
		break;
	}if (k == -1) {
		cout << "没找到你要查的数据" << endl;
	}
	else {
		cout << "原始数据如下" << endl;
		cout << "姓名:" << s[i].name << "\t工号:" << s[i].gh << endl;
		cout << "原基本工资:" << s[i].jbgz << "请输入新值，不改则按回车" << endl;
		gets(num);
		c1 = num[0];
		if (isdigit(c1)) {
			s[i].jbgz = Get_v(num);
		}cout << "原奖金:" << s[i].jj << "请输入新值，不改则按回车" << endl;
		gets(num);
		c1 = num[0];
		if (isdigit(c1)) {
			s[i].jj = Get_v(num);
		}cout << "原扣款" << s[i].kk << "请输入新值，不改则按回车" << endl;
		gets(num);
		c1 = num[0];
		if (isdigit(c1)) {
			s[i].kk = Get_v(num);
		}cout << "修改后的数据如下" << endl;
		cout << "工号:" << s[i].gh << "姓名:" << s[i].name << "基本工资:" << s[i].jbgz << "奖金:" << s[i].jj << "扣款:" << s[i].kk << endl;
		s[i].yygz = s[i].jbgz + s[i].jj - s[i].kk;
		if (s[i].yfgz < 800.0f)s[i].sk = 0.0f;
		else if (s[i].yfgz < 1400.0f)s[i].sk = 0.05f * (s[i].yfgz - 800.0f);
		else s[i].sk = 0.1f * (s[i].yfgz - 1400.0f);
		s[i].sfgz = s[i].yfgz - s[i].sk - s[i].kk;
	}
}