<?php /* Copyright 2010 Karl R. Wilcox

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */


function makeFur ( $name ) {
  global $messages;
    global $svg_context;
  $fur_data = array (
    'counter-ermine' => array (  'width' => 222, 'height' => 400, 'body' => '<polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('sable') . '"/>
        <g fill="' . rgb('argent') . ' ">
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="55" cy="30"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="36" cy="55"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="74" cy="55"/>
            <path stroke-width="2" stroke="' . rgb('pattern-stroke') . '" d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g transform="translate(111,200)" fill="' . rgb('argent') . '">
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="55" cy="30"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="36" cy="55"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="74" cy="55"/>
            <path stroke-width="2" stroke="' . rgb('pattern-stroke') . '" d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>'  ),
    'counter-potent' => array ( 'width' => 333, 'height' => 200, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,200 333,200 333,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 209,0 209,50 292,50 292,98 42,98 42,50 125,50" fill="' . rgb('azure') . '" />
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-200)" points="125,0 209,0 209,50 292,50 292,98 42,98 42,50 125,50" fill="' . rgb('azure') . '" />' ),
    'counter-vair' => array (  'link' => 'http://karlwilcox.com/parker/c/counter-vair', 'width' => 250, 'height' => 480, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,480 250,480 250,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,238 0,238 66,200 66,40" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-480)" points="125,0 193,40 193,200 250,238 0,238 66,200 66,40" fill="' . rgb('azure') . '"/>' ),
    'ermine' => array (  'link' => 'http://karlwilcox.com/parker/e/ermine', 'width' => 222, 'height' => 400, 'body' => '        <polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('argent') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'erminites' => array (  'link' => 'http://karlwilcox.com/parker/e/ermine', 'width' => 222, 'height' => 400, 'body' => '        <polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('argent') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="36" cy="55" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="74" cy="55" fill="' . rgb('gules') . '"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
       <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="36" cy="55" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="74" cy="55" fill="' . rgb('gules') . '"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'erminois' => array (  'link' => 'http://karlwilcox.com/parker/e/ermine', 'width' => 222, 'height' => 400, 'body' => '<polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('or') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'pean' => array (  'link' => 'http://karlwilcox.com/parker/p/pean', 'width' => 222, 'height' => 400, 'body' => '<polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('sable') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('or') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('or') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'potent' => array (  'width' => 333, 'height' => 200, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,400 333,400 333,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 209,0 209,50 292,50 292,100 42,100 42,50 125,50" fill="' . rgb('azure') . '" />
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,100 42,100 42,150 125,150 125,200 0,200" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="209,200 209,150 292,150 292,100 333,100 333,200" fill="' . rgb('azure') . '"/>' ),
    'potent-counter-potent' => array ( 'width' => 333, 'height' => 200, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,400 333,400 333,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 209,0 209,50 292,50 292,98 42,98 42,50 125,50" fill="' . rgb('azure') . '" />
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-300)" points="0,100 42,100 42,150 125,150 125,200 0,200" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-300)" points="209,200 209,150 292,150 292,100 333,100 333,200" fill="' . rgb('azure') . '"/>' ),
    'vair' => array ( 'width' => 250, 'height' => 480, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,480 250,480 250,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(125,240)" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(-125,240)" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>' ),
    'vair-en-point' => array (  'width' => 125, 'height' => 240, 'body' => '<g transform="scale(0.5)">
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,480 250,480 250,0" fill="' . rgb('argent') . '"/>
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(125,-480)"
                points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(-125,-480)"
                points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
        </g>'),
    'vair-in-pale' => array ( 'width' => 250, 'height' => 240, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,240 250,240 250,0" fill="' . rgb('vert') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>'),
      'soccer-field' => array ( 'width' => 1000, 'height' => 1200, 'body' => '<polygon points="0,0 1000,0 1000,1200 0,1200" fill="' . rgb('vert') . '"/>
              <g stroke="' . rgb('white-line') . '" stroke-width="10" stroke-linecap="square" fill="none">
    <path d="M100.5,100.5 L500.5,100.5" />
    <path d="M100.5,100.5 L100.5,600.5" />
    <path d="M100.5,600.5 L500.5,600.5" />
    <path d="M440.5,600.5 C440.5,567.363 467.363,540.5 500.5,540.5" />
    <path d="M300.5,100.5 L300.5,290.5" />
    <path d="M300.5,290.5 L500.5,290.5" />
    <path d="M400.5,100.5 L400.5,160.5" />
    <path d="M400.5,160.5 L500.5,160.5" />
    <path d="M500.5,330.5 C472.886,330.5 450.5,312.591 450.5,290.5" />
    <path d="M900.5,100.5 L500.5,100.5" />
    <path d="M900.5,100.5 L900.5,600.5" />
    <path d="M900.5,600.5 L500.5,600.5" />
    <path d="M560.5,600.5 C560.5,567.363 533.637,540.5 500.5,540.5" />
    <path d="M700.5,100.5 L700.5,290.5" />
    <path d="M700.5,290.5 L500.5,290.5" />
    <path d="M600.5,100.5 L600.5,160.5" />
    <path d="M600.5,160.5 L500.5,160.5" />
    <path d="M500.5,330.5 C528.114,330.5 550.5,312.591 550.5,290.5" />
    <path d="M100.5,1100.5 L500.5,1100.5" />
    <path d="M100.5,1100.5 L100.5,600.5" />
    <path d="M100.5,600.5 L500.5,600.5" />
    <path d="M440.5,600.5 C440.5,633.637 467.363,660.5 500.5,660.5" />
    <path d="M300.5,1100.5 L300.5,910.5" />
    <path d="M300.5,910.5 L500.5,910.5" />
    <path d="M400.5,1100.5 L400.5,1040.5" />
    <path d="M400.5,1040.5 L500.5,1040.5" />
    <path d="M500.5,870.5 C472.886,870.5 450.5,888.409 450.5,910.5" />
    <path d="M900.5,1100.5 L500.5,1100.5" />
    <path d="M900.5,1100.5 L900.5,600.5" />
    <path d="M900.5,600.5 L500.5,600.5" />
    <path d="M560.5,600.5 C560.5,633.637 533.637,660.5 500.5,660.5" />
    <path d="M700.5,1100.5 L700.5,910.5" />
    <path d="M700.5,910.5 L500.5,910.5" />
    <path d="M600.5,1100.5 L600.5,1040.5" />
    <path d="M600.5,1040.5 L500.5,1040.5" />
    <path d="M500.5,870.5 C528.114,870.5 550.5,888.409 550.5,910.5" />
  </g>'),
      'american-football-field' => array( 'width' => 1000, 'height' => 1200, 'licence' => 'http://en.wikipedia.org/wiki/User:Xyzzy_n', 'body' => '<g>
    <path d="M1000,-0 L1000,2072.727 L-0,2072.727 L-0,-0 z" fill="' . rgb('vert') . '" />
    <g >
      <path d="M945.455,54.536 L945.455,2018.189 L54.546,2018.189 L54.546,54.536 z" fill="' . rgb('vert') . '"/>
      <path d="M945.455,54.536 L945.455,2018.189 L54.546,2018.189 L54.546,54.536 z" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="9.091" stroke-linecap="round" stroke-linejoin="round"/>
    </g>
    <g >
      <path d="M945.455,54.545 L945.455,218.181 L54.546,218.181 L54.546,54.545 z" fill="#7E7E7E" fill-opacity="0.498"/>
      <path d="M945.455,54.545 L945.455,218.181 L54.546,218.181 L54.546,54.545 z" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="9.091" stroke-linecap="round" stroke-linejoin="round"/>
    </g>
    <path d="M945.961,302.587 L54.075,302.587 L945.961,302.587 z M945.961,382.764 L54.075,382.764 L945.961,382.764 z M945.961,466.148 L54.075,466.148 L945.961,466.148 z M945.961,546.324 L54.075,546.324 L945.961,546.324 z M945.961,629.869 L54.075,629.869 L945.961,629.869 z M945.961,710.045 L54.075,710.045 L945.961,710.045 z M945.961,793.429 L54.075,793.429 L945.961,793.429 z M945.961,873.606 L54.075,873.606 L945.961,873.606 z M945.961,957.15 L54.075,957.15 L945.961,957.15 z M945.961,1037.327 L54.075,1037.327 L945.961,1037.327 z M945.961,1120.711 L54.075,1120.711 L945.961,1120.711 z M945.961,1200.888 L54.075,1200.888 L945.961,1200.888 z M945.961,1284.432 L54.075,1284.432 L945.961,1284.432 z M945.961,1364.609 L54.075,1364.609 L945.961,1364.609 z M945.961,1447.992 L54.075,1447.992 L945.961,1447.992 z M945.961,1528.169 L54.075,1528.169 L945.961,1528.169 z M945.961,1611.713 L54.075,1611.713 L945.961,1611.713 z M945.961,1691.89 L54.075,1691.89 L945.961,1691.89 z M945.961,1775.274 L54.075,1775.274 L945.961,1775.274 z M524.552,251.755 L475.323,251.755 L524.552,251.755 z M524.552,1822.578 L475.323,1822.578 L524.552,1822.578 z" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="4.545" />
    <path d="M935.209,1756.35 L908.881,1756.35 M935.209,1740.011 L908.881,1740.011 M935.209,1723.672 L908.881,1723.672 M935.209,1707.334 L908.881,1707.334 M935.209,1839.829 L908.881,1839.829 M935.209,1823.49 L908.881,1823.49 M935.209,1807.152 L908.881,1807.152 M935.209,1790.813 L908.881,1790.813 M935.209,1592.713 L908.881,1592.713 M935.209,1576.375 L908.881,1576.375 M935.209,1560.036 L908.881,1560.036 M935.209,1543.697 L908.881,1543.697 M935.209,1676.193 L908.881,1676.193 M935.209,1659.854 L908.881,1659.854 M935.209,1643.515 L908.881,1643.515 M935.209,1627.177 L908.881,1627.177 M935.209,1429.077 L908.881,1429.077 M935.209,1412.739 L908.881,1412.739 M935.209,1396.4 L908.881,1396.4 M935.209,1380.061 L908.881,1380.061 M935.209,1512.557 L908.881,1512.557 M935.209,1496.218 L908.881,1496.218 M935.209,1479.879 L908.881,1479.879 M935.209,1463.541 L908.881,1463.541 M935.209,1265.441 L908.881,1265.441 M935.209,1249.102 L908.881,1249.102 M935.209,1232.763 L908.881,1232.763 M935.209,1216.425 L908.881,1216.425 M935.209,1348.92 L908.881,1348.92 M935.209,1332.581 L908.881,1332.581 M935.209,1316.243 L908.881,1316.243 M935.209,1299.904 L908.881,1299.904 M935.209,1101.805 L908.881,1101.805 M935.209,1085.466 L908.881,1085.466 M935.209,1069.127 L908.881,1069.127 M935.209,1052.789 L908.881,1052.789 M935.209,1185.284 L908.881,1185.284 M935.209,1168.945 L908.881,1168.945 M935.209,1152.606 L908.881,1152.606 M935.209,1136.267 L908.881,1136.267 M935.209,938.168 L908.881,938.168 M935.209,921.83 L908.881,921.83 M935.209,905.491 L908.881,905.491 M935.209,889.152 L908.881,889.152 M935.209,1021.648 L908.881,1021.648 M935.209,1005.309 L908.881,1005.309 M935.209,988.97 L908.881,988.97 M935.209,972.631 L908.881,972.631 M935.209,774.532 L908.881,774.532 M935.209,758.193 L908.881,758.193 M935.209,741.854 L908.881,741.854 M935.209,725.516 L908.881,725.516 M935.209,858.011 L908.881,858.011 M935.209,841.672 L908.881,841.672 M935.209,825.333 L908.881,825.333 M935.209,808.995 L908.881,808.995 M935.209,610.895 L908.881,610.895 M935.209,594.557 L908.881,594.557 M935.209,578.218 L908.881,578.218 M935.209,561.879 L908.881,561.879 M935.209,694.375 L908.881,694.375 M935.209,678.036 L908.881,678.036 M935.209,661.697 L908.881,661.697 M935.209,645.358 L908.881,645.358 M935.209,447.259 L908.881,447.259 M935.209,430.92 L908.881,430.92 M935.209,414.582 L908.881,414.582 M935.209,398.243 L908.881,398.243 M935.209,530.738 L908.881,530.738 M935.209,514.4 L908.881,514.4 M935.209,498.061 L908.881,498.061 M935.209,481.722 L908.881,481.722 M935.209,283.623 L908.881,283.623 M935.209,267.284 L908.881,267.284 M935.209,250.945 L908.881,250.945 M935.209,234.607 L908.881,234.607 M935.209,367.102 L908.881,367.102 M935.209,350.763 L908.881,350.763 M935.209,334.424 L908.881,334.424 M935.209,318.086 L908.881,318.086" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="6.842" />
    <path d="M585.967,42.333 L585.967,66.867 L585.967,42.333 z M414.068,42.333 L414.068,66.867 L414.068,42.333 z" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="6.842" />
    <path d="M640.44,1756.35 L614.112,1756.35 M640.44,1740.011 L614.112,1740.011 M640.44,1723.672 L614.112,1723.672 M640.44,1707.334 L614.112,1707.334 M640.44,1839.829 L614.112,1839.829 M640.44,1823.49 L614.112,1823.49 M640.44,1807.151 L614.112,1807.151 M640.44,1790.813 L614.112,1790.813 M640.44,1592.713 L614.112,1592.713 M640.44,1576.375 L614.112,1576.375 M640.44,1560.036 L614.112,1560.036 M640.44,1543.697 L614.112,1543.697 M640.44,1676.193 L614.112,1676.193 M640.44,1659.854 L614.112,1659.854 M640.44,1643.515 L614.112,1643.515 M640.44,1627.176 L614.112,1627.176 M640.44,1429.077 L614.112,1429.077 M640.44,1412.739 L614.112,1412.739 M640.44,1396.4 L614.112,1396.4 M640.44,1380.061 L614.112,1380.061 M640.44,1512.556 L614.112,1512.556 M640.44,1496.218 L614.112,1496.218 M640.44,1479.879 L614.112,1479.879 M640.44,1463.54 L614.112,1463.54 M640.44,1265.441 L614.112,1265.441 M640.44,1249.102 L614.112,1249.102 M640.44,1232.763 L614.112,1232.763 M640.44,1216.424 L614.112,1216.424 M640.44,1348.92 L614.112,1348.92 M640.44,1332.581 L614.112,1332.581 M640.44,1316.242 L614.112,1316.242 M640.44,1299.904 L614.112,1299.904 M640.44,1101.805 L614.112,1101.805 M640.44,1085.466 L614.112,1085.466 M640.44,1069.127 L614.112,1069.127 M640.44,1052.788 L614.112,1052.788 M640.44,1185.283 L614.112,1185.283 M640.44,1168.945 L614.112,1168.945 M640.44,1152.606 L614.112,1152.606 M640.44,1136.267 L614.112,1136.267 M640.44,938.168 L614.112,938.168 M640.44,921.829 L614.112,921.829 M640.44,905.491 L614.112,905.491 M640.44,889.152 L614.112,889.152 M640.44,1021.647 L614.112,1021.647 M640.44,1005.309 L614.112,1005.309 M640.44,988.97 L614.112,988.97 M640.44,972.631 L614.112,972.631 M640.44,774.532 L614.112,774.532 M640.44,758.193 L614.112,758.193 M640.44,741.854 L614.112,741.854 M640.44,725.516 L614.112,725.516 M640.44,858.011 L614.112,858.011 M640.44,841.672 L614.112,841.672 M640.44,825.333 L614.112,825.333 M640.44,808.995 L614.112,808.995 M640.44,610.895 L614.112,610.895 M640.44,594.557 L614.112,594.557 M640.44,578.218 L614.112,578.218 M640.44,561.879 L614.112,561.879 M640.44,694.374 L614.112,694.374 M640.44,678.036 L614.112,678.036 M640.44,661.697 L614.112,661.697 M640.44,645.358 L614.112,645.358 M640.44,447.259 L614.112,447.259 M640.44,430.92 L614.112,430.92 M640.44,414.581 L614.112,414.581 M640.44,398.243 L614.112,398.243 M640.44,530.738 L614.112,530.738 M640.44,514.399 L614.112,514.399 M640.44,498.061 L614.112,498.061 M640.44,481.722 L614.112,481.722 M640.44,283.623 L614.112,283.623 M640.44,267.284 L614.112,267.284 M640.44,250.945 L614.112,250.945 M640.44,234.606 L614.112,234.606 M640.44,367.102 L614.112,367.102 M640.44,350.763 L614.112,350.763 M640.44,334.424 L614.112,334.424 M640.44,318.086 L614.112,318.086" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="6.842" />
    <path d="M385.894,1756.35 L359.566,1756.35 M385.894,1740.011 L359.566,1740.011 M385.894,1723.672 L359.566,1723.672 M385.894,1707.334 L359.566,1707.334 M385.894,1839.829 L359.566,1839.829 M385.894,1823.49 L359.566,1823.49 M385.894,1807.152 L359.566,1807.152 M385.894,1790.813 L359.566,1790.813 M385.894,1592.713 L359.566,1592.713 M385.894,1576.375 L359.566,1576.375 M385.894,1560.036 L359.566,1560.036 M385.894,1543.697 L359.566,1543.697 M385.894,1676.193 L359.566,1676.193 M385.894,1659.854 L359.566,1659.854 M385.894,1643.515 L359.566,1643.515 M385.894,1627.177 L359.566,1627.177 M385.894,1429.077 L359.566,1429.077 M385.894,1412.739 L359.566,1412.739 M385.894,1396.4 L359.566,1396.4 M385.894,1380.061 L359.566,1380.061 M385.894,1512.557 L359.566,1512.557 M385.894,1496.218 L359.566,1496.218 M385.894,1479.879 L359.566,1479.879 M385.894,1463.541 L359.566,1463.541 M385.894,1265.441 L359.566,1265.441 M385.894,1249.102 L359.566,1249.102 M385.894,1232.763 L359.566,1232.763 M385.894,1216.425 L359.566,1216.425 M385.894,1348.92 L359.566,1348.92 M385.894,1332.581 L359.566,1332.581 M385.894,1316.243 L359.566,1316.243 M385.894,1299.904 L359.566,1299.904 M385.894,1101.805 L359.566,1101.805 M385.894,1085.466 L359.566,1085.466 M385.894,1069.127 L359.566,1069.127 M385.894,1052.789 L359.566,1052.789 M385.894,1185.284 L359.566,1185.284 M385.894,1168.945 L359.566,1168.945 M385.894,1152.606 L359.566,1152.606 M385.894,1136.267 L359.566,1136.267 M385.894,938.168 L359.566,938.168 M385.894,921.83 L359.566,921.83 M385.894,905.491 L359.566,905.491 M385.894,889.152 L359.566,889.152 M385.894,1021.648 L359.566,1021.648 M385.894,1005.309 L359.566,1005.309 M385.894,988.97 L359.566,988.97 M385.894,972.631 L359.566,972.631 M385.894,774.532 L359.566,774.532 M385.894,758.193 L359.566,758.193 M385.894,741.854 L359.566,741.854 M385.894,725.516 L359.566,725.516 M385.894,858.011 L359.566,858.011 M385.894,841.672 L359.566,841.672 M385.894,825.333 L359.566,825.333 M385.894,808.995 L359.566,808.995 M385.894,610.895 L359.566,610.895 M385.894,594.557 L359.566,594.557 M385.894,578.218 L359.566,578.218 M385.894,561.879 L359.566,561.879 M385.894,694.375 L359.566,694.375 M385.894,678.036 L359.566,678.036 M385.894,661.697 L359.566,661.697 M385.894,645.358 L359.566,645.358 M385.894,447.259 L359.566,447.259 M385.894,430.92 L359.566,430.92 M385.894,414.582 L359.566,414.582 M385.894,398.243 L359.566,398.243 M385.894,530.738 L359.566,530.738 M385.894,514.4 L359.566,514.4 M385.894,498.061 L359.566,498.061 M385.894,481.722 L359.566,481.722 M385.894,283.623 L359.566,283.623 M385.894,267.284 L359.566,267.284 M385.894,250.945 L359.566,250.945 M385.894,234.607 L359.566,234.607 M385.894,367.102 L359.566,367.102 M385.894,350.763 L359.566,350.763 M385.894,334.424 L359.566,334.424 M385.894,318.086 L359.566,318.086" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="6.842" />
    <path d="M91.119,1756.35 L64.791,1756.35 M91.119,1740.011 L64.791,1740.011 M91.119,1723.672 L64.791,1723.672 M91.119,1707.334 L64.791,1707.334 M91.119,1839.829 L64.791,1839.829 M91.119,1823.49 L64.791,1823.49 M91.119,1807.151 L64.791,1807.151 M91.119,1790.813 L64.791,1790.813 M91.119,1592.713 L64.791,1592.713 M91.119,1576.375 L64.791,1576.375 M91.119,1560.036 L64.791,1560.036 M91.119,1543.697 L64.791,1543.697 M91.119,1676.193 L64.791,1676.193 M91.119,1659.854 L64.791,1659.854 M91.119,1643.515 L64.791,1643.515 M91.119,1627.176 L64.791,1627.176 M91.119,1429.077 L64.791,1429.077 M91.119,1412.739 L64.791,1412.739 M91.119,1396.4 L64.791,1396.4 M91.119,1380.061 L64.791,1380.061 M91.119,1512.556 L64.791,1512.556 M91.119,1496.218 L64.791,1496.218 M91.119,1479.879 L64.791,1479.879 M91.119,1463.54 L64.791,1463.54 M91.119,1265.441 L64.791,1265.441 M91.119,1249.102 L64.791,1249.102 M91.119,1232.763 L64.791,1232.763 M91.119,1216.424 L64.791,1216.424 M91.119,1348.92 L64.791,1348.92 M91.119,1332.581 L64.791,1332.581 M91.119,1316.242 L64.791,1316.242 M91.119,1299.904 L64.791,1299.904 M91.119,1101.805 L64.791,1101.805 M91.119,1085.466 L64.791,1085.466 M91.119,1069.127 L64.791,1069.127 M91.119,1052.788 L64.791,1052.788 M91.119,1185.283 L64.791,1185.283 M91.119,1168.945 L64.791,1168.945 M91.119,1152.606 L64.791,1152.606 M91.119,1136.267 L64.791,1136.267 M91.119,938.168 L64.791,938.168 M91.119,921.829 L64.791,921.829 M91.119,905.491 L64.791,905.491 M91.119,889.152 L64.791,889.152 M91.119,1021.647 L64.791,1021.647 M91.119,1005.309 L64.791,1005.309 M91.119,988.97 L64.791,988.97 M91.119,972.631 L64.791,972.631 M91.119,774.532 L64.791,774.532 M91.119,758.193 L64.791,758.193 M91.119,741.854 L64.791,741.854 M91.119,725.516 L64.791,725.516 M91.119,858.011 L64.791,858.011 M91.119,841.672 L64.791,841.672 M91.119,825.333 L64.791,825.333 M91.119,808.995 L64.791,808.995 M91.119,610.895 L64.791,610.895 M91.119,594.557 L64.791,594.557 M91.119,578.218 L64.791,578.218 M91.119,561.879 L64.791,561.879 M91.119,694.374 L64.791,694.374 M91.119,678.036 L64.791,678.036 M91.119,661.697 L64.791,661.697 M91.119,645.358 L64.791,645.358 M91.119,447.259 L64.791,447.259 M91.119,430.92 L64.791,430.92 M91.119,414.581 L64.791,414.581 M91.119,398.243 L64.791,398.243 M91.119,530.738 L64.791,530.738 M91.119,514.399 L64.791,514.399 M91.119,498.061 L64.791,498.061 M91.119,481.722 L64.791,481.722 M91.119,283.623 L64.791,283.623 M91.119,267.284 L64.791,267.284 M91.119,250.945 L64.791,250.945 M91.119,234.606 L64.791,234.606 M91.119,367.102 L64.791,367.102 M91.119,350.763 L64.791,350.763 M91.119,334.424 L64.791,334.424 M91.119,318.086 L64.791,318.086" fill-opacity="0" stroke="' . rgb('white-line') . '" stroke-width="6.842" />
    <text transform="matrix(-0, 1, -1, -0, 192.654, 380.724)" >
      <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">10</tspan>
    </text>
    <text transform="matrix(-0, 1, -1, -0, 192.654, 544.36)" >
      <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">20</tspan>
    </text>
    <text transform="matrix(-0, 1, -1, -0, 192.654, 707.996)" >
      <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">30</tspan>
    </text>
    <text transform="matrix(-0, 1, -1, -0, 192.654, 871.633)" >
      <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">40</tspan>
    </text>
    <text transform="matrix(-0, 1, -1, -0, 192.654, 1035.269)" >
      <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">50</tspan>
    </text>
    <path d="M194.999,307.772 L200.889,328.185 L189.108,328.185 z" fill="' . rgb('white-line') . '" />
    <path d="M194.999,471.403 L200.889,491.815 L189.108,491.815 z" fill="' . rgb('white-line') . '" />
    <path d="M194.999,635.039 L200.889,655.452 L189.108,655.452 z" fill="' . rgb('white-line') . '" />
    <path d="M194.999,798.676 L200.889,819.088 L189.108,819.088 z" fill="' . rgb('white-line') . '" />
    <text transform="matrix(-0, 1, -1, -0, 192.654, 1198.226)" >
      <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">40</tspan>
    </text>
      <text transform="matrix(0, -1, 1, 0, 807.346, 1201.094)" >
        <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">40</tspan>
      </text>
      <text transform="matrix(0, -1, 1, 0, 807.346, 1037.458)" >
        <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">50</tspan>
      </text>
      <path d="M805.002,791.403 L799.111,811.815 L810.892,811.815 z" fill="' . rgb('white-line') . '" />
      <path d="M805.002,627.767 L799.111,648.179 L810.892,648.179 z" fill="' . rgb('white-line') . '" />
      <path d="M805.002,464.13 L799.111,484.543 L810.892,484.543 z" fill="' . rgb('white-line') . '" />
      <path d="M805.002,300.5 L799.111,320.912 L810.892,320.912 z" fill="' . rgb('white-line') . '" />
      <text transform="matrix(0, -1, 1, 0, 807.346, 382.913)" >
        <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">10</tspan>
      </text>
      <text transform="matrix(0, -1, 1, 0, 807.346, 546.549)" >
        <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">20</tspan>
      </text>
      <text transform="matrix(0, -1, 1, 0, 807.346, 710.186)" >
        <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">30</tspan>
      </text>
      <text transform="matrix(0, -1, 1, 0, 807.346, 873.822)" >
        <tspan x="-45.661" y="26.121" font-family="Helvetica" font-size="82.101" fill="' . rgb('white-line') . '">40</tspan>
      </text>
    </g>
    '),
      'tennis-court' => array('width' => 1000, 'height' => 1200, 'licence' => 'https://commons.wikimedia.org/wiki/User:Ed_g2s', 'body' => '<polygon points="0,0 1000,0 1000,1200 0,1200" fill="' . rgb('vert') . '"/>
            <path d="M507.039,39.764 L507.039,44.91 L957.677,44.91 L957.677,2007.41 L507.039,2007.41 L507.039,2011.187 L494.539,2011.187 L494.539,2007.41 L45.177,2007.41 L45.177,44.91 L494.539,44.91 L494.539,39.764 L507.039,39.764 z M945.177,1032.41 L845.177,1032.41 L845.177,1994.91 L945.177,1994.91 L945.177,1032.41 z M832.677,1557.41 L170.177,1557.41 L170.177,1994.91 L494.539,1994.91 L494.539,1974.173 L507.039,1974.173 L507.039,1994.91 L832.677,1994.91 L832.677,1557.41 z M157.677,1032.41 L57.677,1032.41 L57.677,1994.91 L157.677,1994.91 L157.677,1032.41 z M832.677,1032.41 L507.677,1032.41 L507.677,1544.91 L832.677,1544.91 L832.677,1032.41 z M495.177,1032.41 L170.177,1032.41 L170.177,1544.91 L495.177,1544.91 L495.177,1032.41 z M945.177,57.41 L845.177,57.41 L845.177,1019.91 L945.177,1019.91 L945.177,57.41 z M832.677,507.41 L507.677,507.41 L507.677,1019.91 L832.677,1019.91 L832.677,507.41 z M495.177,507.41 L170.177,507.41 L170.177,1019.91 L495.177,1019.91 L495.177,507.41 z M157.677,57.41 L57.677,57.41 L57.677,1019.91 L157.677,1019.91 L157.677,57.41 z M494.539,57.41 L170.177,57.41 L170.177,494.91 L832.677,494.91 L832.677,57.41 L507.039,57.41 L507.039,76.778 L494.539,76.778 L494.539,57.41 z" fill="' . rgb('white-line') . '"/>
'),
      'basket-ball' => array('width' => 1000, 'height' => 1200, 'licence' => 'https://commons.wikimedia.org/wiki/User:Mangostar', 'body' => '<polygon points="0,0 1000,0 1000,1200 0,1200" fill="' . rgb('tenne') . '"/>
                  <g stroke="' . rgb('sable') . '" fill="none" stroke-width="11.639">
                      <path d="M34.822,967 L959.955,967" />
    <path d="M887.763,1786.177 C887.768,1556.33 713.428,1370.029 498.432,1370.134 C283.435,1370.238 109.254,1556.708 109.454,1786.555" />
    <path d="M887.762,1784.973 L887.762,1885.978" />
    <path d="M109.455,1784.787 L109.455,1885.792" />
    <path d="M608.267,1506.462 C608.267,1441.031 558.652,1387.988 497.448,1387.988 C436.245,1387.988 386.629,1441.031 386.629,1506.462 L497.448,1506.462 z" />
    <path d="M608.23,1508.601 C609.224,1551.066 588.47,1590.73 554.103,1612.049 C519.735,1633.369 477.226,1632.949 443.232,1610.955 C409.239,1588.961 389.174,1548.895 390.9,1506.456" stroke-width="14.208" stroke-dasharray="56.831,56.831" />
    <path d="M887.763,145.533 C887.768,375.38 713.428,561.681 498.432,561.576 C283.435,561.472 109.254,375.002 109.454,145.155" />
    <path d="M887.762,146.737 L887.762,45.731" />
    <path d="M109.455,146.923 L109.455,45.918" />
    <path d="M34.822,1999.992 L34.822,2088.369" stroke-width="2.328" stroke-dasharray="1.862,1.862" />
    <path d="M961.83,1999.992 L961.83,2088.369" stroke-width="2.328" stroke-dasharray="1.862,1.862" />
    <path d="M34.822,2037.591 L444.675,2037.591" stroke-width="2.328" stroke-dasharray="1.862,1.862" />
    <path d="M522.073,2037.591 L961.83,2037.591" stroke-width="2.328" stroke-dasharray="1.862,1.862" />
    <path d="M681.39,1898.1 L608.273,1508.986" />
    <path d="M652.351,1700.289 L657.901,1726.325" />
    <path d="M388.134,1507.549 L312.281,1894.146" />
    <path d="M340.865,1699.192 L334.932,1725.132" />
    <path d="M383.415,430.679 C383.415,496.11 433.03,549.153 494.234,549.153 C555.437,549.153 605.052,496.11 605.052,430.679 L494.234,430.679 z" />
    <path d="M383.448,428.535 C382.455,386.069 403.208,346.406 437.576,325.086 C471.943,303.767 514.452,304.186 548.446,326.18 C582.44,348.174 602.505,388.24 600.779,430.679" stroke-width="14.208" stroke-dasharray="56.831,56.831" />
    <path d="M310.284,39.044 L383.401,428.158" />
    <path d="M339.323,236.855 L333.774,210.819" />
    <path d="M603.542,429.58 L679.394,42.983" />
    <path d="M650.811,237.937 L656.743,211.997" />
    <path d="M608.523,965.925 C608.523,899.327 558.023,845.338 495.728,845.338 C433.432,845.338 382.932,899.327 382.932,965.925 C382.932,1032.523 433.433,1086.511 495.728,1086.511 C558.024,1086.511 608.524,1032.522 608.524,965.924 z" />
    <path d="M35.941,45.728 L961.075,45.728 L961.075,1893.945 L35.941,1893.945 z" />

    </g>
'),
  );

  if ( ! array_key_exists($name, $fur_data) ) {
    $messages->addMessage( 'internal', "Cannot draw fur $name" );
    $name = 'pean';
  }
    if (array_key_exists('licence',$fur_data[$name])) {
        $messages->addMessage('licence', $name . ' ' . $fur_data[$name]['licence']);
    }
  return $fur_data[$name];
}
