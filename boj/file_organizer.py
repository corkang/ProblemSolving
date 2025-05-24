#!/usr/bin/env python3
import os
import shutil
import argparse
import re
import sys

def organize_file(root_dir: str, difficulty: str, filename: str):
    # 원본 파일 경로
    src_path = os.path.join(root_dir, filename)
    if not os.path.isfile(src_path):
        print(f"[경고] 파일을 찾을 수 없습니다: {src_path}", file=sys.stderr)
        return

    # 문제번호(숫자)만 추출
    m = re.match(r'^(\d+)\.[^.]+$', filename)
    if not m:
        print(f"[경고] 파일명이 '숫자.확장자' 형식이 아닙니다: {filename}", file=sys.stderr)
        return
    problem_no = m.group(1)

    # 목적지 디렉터리 생성: root_dir/difficulty/problem_no
    dest_dir = os.path.join(root_dir, difficulty, problem_no)
    os.makedirs(dest_dir, exist_ok=True)

    # 파일 이동
    dest_path = os.path.join(dest_dir, filename)
    try:
        shutil.move(src_path, dest_path)
        print(f"[이동] {src_path} → {dest_path}")
    except Exception as e:
        print(f"[오류] 이동 실패: {filename}: {e}", file=sys.stderr)

def main():
    parser = argparse.ArgumentParser(
        description="백준 문제 풀이 파일을 난이도/문제번호 폴더로 자동 정리합니다."
    )
    parser.add_argument('difficulty',
                        help='문제 난이도 (예: Bronze, Silver)')
    parser.add_argument('files', nargs='+',
                        help='정리할 파일명들 (예: 1978.cpp 2745.java)')
    parser.add_argument('--root', '-r',
                        default='.',
                        help='정리할 최상위 디렉터리 (기본: 현재 디렉터리). '
                             '절대경로, ~/로 시작, 혹은 상대경로 모두 가능.')
    args = parser.parse_args()

    # root 경로 확장 및 절대경로 변환
    root_dir = os.path.abspath(os.path.expanduser(args.root))

    # 실제로 organize 실행
    for fname in args.files:
        organize_file(root_dir, args.difficulty, fname)

if __name__ == '__main__':
    main()
