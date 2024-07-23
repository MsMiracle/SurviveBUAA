#include <cstdio>
#include <queue>
using namespace std;

struct node {
	int x, s;
	node(int _x, int _s): x(_x), s(_s) { }
};
queue<node> q;
int k[201], n, a, b;
bool vis[201];

int main() {
	scanf("%d%d%d", &n, &a, &b);
	for(register int i = 1; i <= n; ++i) {
		scanf("%d", k + i);
	}
	q.push(node(a, 0));
	vis[a] = true;
	while(!q.empty()) {
		node tmp = q.front();
		q.pop();
		if(tmp.x == b) {
			printf("%d\n", tmp.s);
			return 0;
		}
		int nx;
		nx = tmp.x + k[tmp.x];
		if(nx > 0 && nx <= n && !vis[nx]) {
			q.push(node(nx, tmp.s + 1));
			vis[nx] = true;
		}
		nx = tmp.x - k[tmp.x];
		if(nx > 0 && nx <= n && !vis[nx]) {
			q.push(node(nx, tmp.s + 1));
			vis[nx] = true;
		}
	}
	printf("-1\n");
	return 0;
}
