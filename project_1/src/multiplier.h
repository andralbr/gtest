class Multiplier
{
    public:
        Multiplier(){}

        Multiplier( int multiplicator )
            : m_multiplicator( multiplicator )
        {

        }

        int multiply( int number )
        {
            return m_multiplicator * number;
        }

        double multiply( double number )
        {
            return m_multiplicator * number;
        }

        int getMultiplicator()
        {
            return m_multiplicator;
        }

    private:
        int m_multiplicator;
};