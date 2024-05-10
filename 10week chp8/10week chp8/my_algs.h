// my_algs.h

#ifndef GUARD_my_algs_h
#define GUARD_my_algs_h

// 최대값 함수
template<class T>
T max(const T& left, const T& right) {
	return left > right ? left : right;
}

// 최소값 함수
template<class T>
T min(const T& left, const T& right) {
	return left < right ? left : right;
}

// 동일한 함수
template<class T>
bool equals(const T& left, const T& right) {
	return left == right ? true = false;
}

#endif // !GUARD_my_algs_h

