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
        int minCost = 1e9;  // 충분히 큰 값으로 초기화
        int current = -1;

        // 방문하지 않은 노드 중 가장 작은 값을 가진 노드를 선택
        for (int j = 1; j <= n; j++) {
            if (!visited[j] && maps[j] != -1 && maps[j] < minCost) {
                minCost = maps[j];
                current = j;
            }
        }

        if (current == -1) break;  // 더 이상 방문할 수 있는 노드가 없을 때 종료

        visited[current] = true;

        // 현재 노드와 연결된 모든 경로를 확인하며 최단 거리 갱신
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

    // bus 객체들을 저장할 배열 선언
    bus routes[1000];  // m의 최대값에 따라 배열 크기를 설정 (최대 1000개로 가정)

    // 초기화
    for (int i = 0; i < 1001; i++) {
        maps[i] = -1;
    }
    maps[1] = 0;

    // 버스 경로 입력
    for (int i = 0; i < m; i++) {
        cin >> routes[i].start >> routes[i].end >> routes[i].cost;
    }
    cin >> s >> e;

    // 최단 경로 계산
    daik(n, routes, m);

    // 결과 출력
    if (maps[e] == -1) cout << "0";  // 경로가 없으면 0 출력
    else cout << maps[e];  // 최단 경로 출력

    return 0;
}
