#include "entity.h"
#include <stdio.h>


#include <genepi/genepi.h>

GENEPI_CLASS( entity )
{
    GENEPI_CONSTRUCTOR();
    GENEPI_METHOD(open);
    GENEPI_METHOD(close);
}

GENEPI_MODULE( entity );



entity::entity()
{
    printf("entity");
}

entity::~entity()
{
    printf("~entity");
}

bool entity::open()
{
    printf("entity open");
}

void entity::close()
{
    printf("entity close");
}

/*
Test::Test()
{
    m_pos.x = 1.0f;
    m_pos.y = 2.0f;
}

float Test::SetPosition(Point* pos)
{
    m_pos = *pos;
    return m_pos.x;
}
*/