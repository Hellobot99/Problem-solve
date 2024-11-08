#include <iostream>
#include <algorithm>

using namespace std;

int maps[1001];
bool visited[1001] = { false };

class bus {
public:
    int start;
    int end;
    int cost;
};

void daik(int n, bus routes[], int m) {
    for (int i = 0; i < n; i++) {
        int minCost = 1e9;  // ����� ū ������ �ʱ�ȭ
        int current = -1;

        // �湮���� ���� ��� �� ���� ���� ���� ���� ��带 ����
        for (int j = 1; j <= n; j++) {
            if (!visited[j] && maps[j] != -1 && maps[j] < minCost) {
                minCost = maps[j];
                current = j;
            }
        }

        if (current == -1) break;  // �� �̻� �湮�� �� �ִ� ��尡 ���� �� ����

        visited[current] = true;

        // ���� ���� ����� ��� ��θ� Ȯ���ϸ� �ִ� �Ÿ� ����
        for (int i = 0; i < m; i++) {
            if (routes[i].start == current && !visited[routes[i].end]) {
                if (maps[routes[i].end] == -1 || maps[routes[i].end] > maps[current] + routes[i].cost) {
                    maps[routes[i].end] = maps[current] + routes[i].cost;
                }
            }
        }
    }
}

int main() {
    int n, m, s, e;
    cin >> n >> m;

    // bus ��ü���� ������ �迭 ����
    bus routes[1000];  // m�� �ִ밪�� ���� �迭 ũ�⸦ ���� (�ִ� 1000���� ����)

    // �ʱ�ȭ
    for (int i = 0; i < 1001; i++) {
        maps[i] = -1;
    }
    maps[1] = 0;

    // ���� ��� �Է�
    for (int i = 0; i < m; i++) {
        cin >> routes[i].start >> routes[i].end >> routes[i].cost;
    }
    cin >> s >> e;

    // �ִ� ��� ���
    daik(n, routes, m);

    // ��� ���
    if (maps[e] == -1) cout << "0";  // ��ΰ� ������ 0 ���
    else cout << maps[e];  // �ִ� ��� ���

    return 0;
}
