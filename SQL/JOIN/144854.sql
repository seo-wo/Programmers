-- 조건에 맞는 도서와 저자 리스트 출력하기
SELECT book.BOOK_ID,
	author.AUTHOR_NAME,
	DATE_FORMAT(book.PUBLISHED_DATE, '%Y-%m-%d') AS PUBLISHED_DATE
FROM BOOK AS book
JOIN AUTHOR as author
ON book.AUTHOR_ID = author.AUTHOR_ID
WHERE book.CATEGORY = '경제'
ORDER BY book.PUBLISHED_DATE