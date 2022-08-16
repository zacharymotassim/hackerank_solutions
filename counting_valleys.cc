int countingValleys(int steps, string path)
{

  int valey_tracker = 0 ; int altitude = 0 , previous_altitude = 0 ;
  for( size_t i = 0 ; i < path.size( ) ; ++i )
  {
    if(path[ i ]=='D')
    {
      previous_altitude = altitude ;
      altitude--;
    }
    else if( path[ i ]=='U' )
    {
      previous_altitude = altitude ;
      altitude++ ;
    }

    if(altitude==-1&&previous_altitude==0)
    {
      valey_tracker++ ;
    }
  }
  return valey_tracker ;
}
