struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y); // 점의 좌표이동
	void AddPoint(const Point& pos); // 점의 좌표 증가
	void ShowPosition(); // 현재 x, y 좌표정보 출력

};
