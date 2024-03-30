vector<int> findPoint(vector<vector<int>> lines)
{
    int minX = INT_MAX, minY = INT_MAX;
    int minDistSum = INT_MAX;

    
    for (auto line : lines)
    {
        int x1 = line[0], y1 = line[1];
        int x2 = line[2], y2 = line[3];
        int midX = (x1 + x2) / 2, midY = (y1 + y2) / 2;
        int distSum = 0;

       
        for (auto line : lines)
        {
            int x1 = line[0], y1 = line[1];
            int x2 = line[2], y2 = line[3];
            int dist = abs((y2 - y1) * midX - (x2 - x1) * midY + x2 * y1 - y2 * x1) /
                       sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
            distSum += dist;
        }

        if (distSum < minDistSum)
        {
            minDistSum = distSum;
            minX = midX;
            minY = midY;
        }
        else if (distSum == minDistSum && midX < minX)
        {
            minX = midX;
            minY = midY;
        }
        else if (distSum == minDistSum && midX == minX && midY < minY)
        {
            minY = midY;
        }
    }
    return {minX, minY};
}
