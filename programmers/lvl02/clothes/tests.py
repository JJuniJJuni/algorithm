from unittest import TestCase

from main import solution

class ClothesTests(TestCase):
    def test_solution(self):
        self.assertEqual(5, solution([["yellow_hat", "headgear"]
                                         , ["blue_sunglasses", "eyewear"]
                                        , ["green_turban", "headgear"]]))
        self.assertEqual(3, solution([["crow_mask", "face"], ["blue_sunglasses", "face"], ["smoky_makeup", "face"]]))