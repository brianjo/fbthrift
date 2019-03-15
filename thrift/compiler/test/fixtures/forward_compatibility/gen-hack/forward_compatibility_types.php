<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * OldStructure
 */
class OldStructure implements \IThriftStruct {
  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'features',
      'type' => \TType::MAP,
      'ktype' => \TType::I16,
      'vtype' => \TType::DOUBLE,
      'key' => dict[
        'type' => \TType::I16,
      ],
      'val' => dict[
        'type' => \TType::DOUBLE,
        ],
        'format' => 'collection',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'features' => 1,
  };
  const int STRUCTURAL_ID = 4339262946178813539;
  /**
   * Original thrift field:-
   * 1: map<i16, double> features
   */
  public Map<int, float> $features;

  public function __construct(?Map<int, float> $features = null  ) {
    if ($features === null) {
      $this->features = Map {};
    } else {
      $this->features = $features;
    }
  }

  public function getName(): string {
    return 'OldStructure';
  }

  public function read(\TProtocol $input): int {
    $xfer = 0;
    $fname = '';
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin(inout $fname);
    while (true)
    {
      $xfer += $input->readFieldBegin(inout $fname, inout $ftype, inout $fid);
      if ($ftype == \TType::STOP) {
        break;
      }
      if (!$fid && $fname !== null) {
        $fid = (int) self::$_TFIELDMAP->get($fname);
        if ($fid !== 0) {
          $ftype = self::$_TSPEC[$fid]['type'];
        }
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == \TType::MAP) {
            $_size1 = 0;
            $_val0 = Map {};
            $_ktype2 = 0;
            $_vtype3 = 0;
            $xfer += $input->readMapBegin(
              inout $_ktype2,
              inout $_vtype3,
              inout $_size1,
            );
            for ($_i5 = 0; $_size1 === null || $_i5 < $_size1; ++$_i5)
            {
              if ($_size1 === null && !$input->readMapHasNext()) {
                break;
              }
              $key6 = null;
              $xfer += $input->readI16(&$key6);
              $val7 = null;
              $xfer += $input->readDouble(&$val7);
              if ($key6 !== null && $val7 !== null) {
                $_val0[$key6] = $val7;
              }
            }
            $xfer += $input->readMapEnd();
            $this->features = $_val0;
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write(\TProtocol $output): int {
    $xfer = 0;
    $xfer += $output->writeStructBegin('OldStructure');
    if ($this->features !== null) {
      $_val0 = $this->features;
      if (!($_val0 is \HH\KeyedContainer<_, _>) && !(($_val0 is \Iterator<_> || $_val0 is \IteratorAggregate<_>) && $_val0 is \Countable)) {
        throw new \TProtocolException('Bad type in structure.', \TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('features', \TType::MAP, 1);
      $output->writeMapBegin(\TType::I16, \TType::DOUBLE, C\count($_val0));
      if ($_val0 !== null)
      {
        foreach ($_val0 as $kiter1 => $viter2)
        {
          $xfer += $output->writeI16($kiter1);
          $xfer += $output->writeDouble($viter2);
        }
      }
      $output->writeMapEnd();
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Original thrift struct:-
 * NewStructure
 */
class NewStructure implements \IThriftStruct {
  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'features',
      'type' => \TType::MAP,
      'ktype' => \TType::I16,
      'vtype' => \TType::DOUBLE,
      'key' => dict[
        'type' => \TType::I16,
      ],
      'val' => dict[
        'type' => \TType::DOUBLE,
        ],
        'format' => 'collection',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'features' => 1,
  };
  const int STRUCTURAL_ID = 4339262946178813539;
  /**
   * Original thrift field:-
   * 1: map<i16, double> features
   */
  public Map<int, float> $features;

  public function __construct(?Map<int, float> $features = null  ) {
    if ($features === null) {
      $this->features = Map {};
    } else {
      $this->features = $features;
    }
  }

  public function getName(): string {
    return 'NewStructure';
  }

  public function read(\TProtocol $input): int {
    $xfer = 0;
    $fname = '';
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin(inout $fname);
    while (true)
    {
      $xfer += $input->readFieldBegin(inout $fname, inout $ftype, inout $fid);
      if ($ftype == \TType::STOP) {
        break;
      }
      if (!$fid && $fname !== null) {
        $fid = (int) self::$_TFIELDMAP->get($fname);
        if ($fid !== 0) {
          $ftype = self::$_TSPEC[$fid]['type'];
        }
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == \TType::MAP) {
            $_size1 = 0;
            $_val0 = Map {};
            $_ktype2 = 0;
            $_vtype3 = 0;
            $xfer += $input->readMapBegin(
              inout $_ktype2,
              inout $_vtype3,
              inout $_size1,
            );
            for ($_i5 = 0; $_size1 === null || $_i5 < $_size1; ++$_i5)
            {
              if ($_size1 === null && !$input->readMapHasNext()) {
                break;
              }
              $key6 = null;
              $xfer += $input->readI16(&$key6);
              $val7 = null;
              $xfer += $input->readDouble(&$val7);
              if ($key6 !== null && $val7 !== null) {
                $_val0[$key6] = $val7;
              }
            }
            $xfer += $input->readMapEnd();
            $this->features = $_val0;
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write(\TProtocol $output): int {
    $xfer = 0;
    $xfer += $output->writeStructBegin('NewStructure');
    if ($this->features !== null) {
      $_val0 = $this->features;
      if (!($_val0 is \HH\KeyedContainer<_, _>) && !(($_val0 is \Iterator<_> || $_val0 is \IteratorAggregate<_>) && $_val0 is \Countable)) {
        throw new \TProtocolException('Bad type in structure.', \TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('features', \TType::MAP, 1);
      $output->writeMapBegin(\TType::I16, \TType::DOUBLE, C\count($_val0));
      if ($_val0 !== null)
      {
        foreach ($_val0 as $kiter1 => $viter2)
        {
          $xfer += $output->writeI16($kiter1);
          $xfer += $output->writeDouble($viter2);
        }
      }
      $output->writeMapEnd();
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Original thrift struct:-
 * NewStructure2
 */
class NewStructure2 implements \IThriftStruct {
  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'features',
      'type' => \TType::MAP,
      'ktype' => \TType::I16,
      'vtype' => \TType::FLOAT,
      'key' => dict[
        'type' => \TType::I16,
      ],
      'val' => dict[
        'type' => \TType::FLOAT,
        ],
        'format' => 'collection',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'features' => 1,
  };
  const int STRUCTURAL_ID = 2902783873822916022;
  /**
   * Original thrift field:-
   * 1: map<i16, float> features
   */
  public Map<int, float> $features;

  public function __construct(?Map<int, float> $features = null  ) {
    if ($features === null) {
      $this->features = Map {};
    } else {
      $this->features = $features;
    }
  }

  public function getName(): string {
    return 'NewStructure2';
  }

  public function read(\TProtocol $input): int {
    $xfer = 0;
    $fname = '';
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin(inout $fname);
    while (true)
    {
      $xfer += $input->readFieldBegin(inout $fname, inout $ftype, inout $fid);
      if ($ftype == \TType::STOP) {
        break;
      }
      if (!$fid && $fname !== null) {
        $fid = (int) self::$_TFIELDMAP->get($fname);
        if ($fid !== 0) {
          $ftype = self::$_TSPEC[$fid]['type'];
        }
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == \TType::MAP) {
            $_size1 = 0;
            $_val0 = Map {};
            $_ktype2 = 0;
            $_vtype3 = 0;
            $xfer += $input->readMapBegin(
              inout $_ktype2,
              inout $_vtype3,
              inout $_size1,
            );
            for ($_i5 = 0; $_size1 === null || $_i5 < $_size1; ++$_i5)
            {
              if ($_size1 === null && !$input->readMapHasNext()) {
                break;
              }
              $key6 = null;
              $xfer += $input->readI16(&$key6);
              $val7 = null;
              $xfer += $input->readFloat(&$val7);
              if ($key6 !== null && $val7 !== null) {
                $_val0[$key6] = $val7;
              }
            }
            $xfer += $input->readMapEnd();
            $this->features = $_val0;
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write(\TProtocol $output): int {
    $xfer = 0;
    $xfer += $output->writeStructBegin('NewStructure2');
    if ($this->features !== null) {
      $_val0 = $this->features;
      if (!($_val0 is \HH\KeyedContainer<_, _>) && !(($_val0 is \Iterator<_> || $_val0 is \IteratorAggregate<_>) && $_val0 is \Countable)) {
        throw new \TProtocolException('Bad type in structure.', \TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('features', \TType::MAP, 1);
      $output->writeMapBegin(\TType::I16, \TType::FLOAT, C\count($_val0));
      if ($_val0 !== null)
      {
        foreach ($_val0 as $kiter1 => $viter2)
        {
          $xfer += $output->writeI16($kiter1);
          $xfer += $output->writeFloat($viter2);
        }
      }
      $output->writeMapEnd();
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Original thrift struct:-
 * NewStructureNested
 */
class NewStructureNested implements \IThriftStruct {
  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'lst',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => dict[
        'type' => \TType::MAP,
        'ktype' => \TType::I16,
        'vtype' => \TType::FLOAT,
        'key' => dict[
          'type' => \TType::I16,
        ],
        'val' => dict[
          'type' => \TType::FLOAT,
          ],
          'format' => 'collection',
        ],
        'format' => 'collection',
      ],
    2 => dict[
      'var' => 'mp',
      'type' => \TType::MAP,
      'ktype' => \TType::I16,
      'vtype' => \TType::MAP,
      'key' => dict[
        'type' => \TType::I16,
      ],
      'val' => dict[
        'type' => \TType::MAP,
        'ktype' => \TType::I16,
        'vtype' => \TType::FLOAT,
        'key' => dict[
          'type' => \TType::I16,
        ],
        'val' => dict[
          'type' => \TType::FLOAT,
          ],
          'format' => 'collection',
        ],
        'format' => 'collection',
      ],
    3 => dict[
      'var' => 's',
      'type' => \TType::SET,
      'etype' => \TType::MAP,
      'elem' => dict[
        'type' => \TType::MAP,
        'ktype' => \TType::I16,
        'vtype' => \TType::FLOAT,
        'key' => dict[
          'type' => \TType::I16,
        ],
        'val' => dict[
          'type' => \TType::FLOAT,
          ],
          'format' => 'collection',
        ],
        'format' => 'collection',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'lst' => 1,
    'mp' => 2,
    's' => 3,
  };
  const int STRUCTURAL_ID = 2933545103058330422;
  /**
   * Original thrift field:-
   * 1: list<map<i16, float>> lst
   */
  public Vector<Map<int, float>> $lst;
  /**
   * Original thrift field:-
   * 2: map<i16, map<i16, float>> mp
   */
  public Map<int, Map<int, float>> $mp;
  /**
   * Original thrift field:-
   * 3: set<map<i16, float>> s
   */
  public Set<arraykey> $s;

  public function __construct(?Vector<Map<int, float>> $lst = null, ?Map<int, Map<int, float>> $mp = null, ?Set<arraykey> $s = null  ) {
    if ($lst === null) {
      $this->lst = Vector {};
    } else {
      $this->lst = $lst;
    }
    if ($mp === null) {
      $this->mp = Map {};
    } else {
      $this->mp = $mp;
    }
    if ($s === null) {
      $this->s = Set {};
    } else {
      $this->s = $s;
    }
  }

  public function getName(): string {
    return 'NewStructureNested';
  }

  public function read(\TProtocol $input): int {
    $xfer = 0;
    $fname = '';
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin(inout $fname);
    while (true)
    {
      $xfer += $input->readFieldBegin(inout $fname, inout $ftype, inout $fid);
      if ($ftype == \TType::STOP) {
        break;
      }
      if (!$fid && $fname !== null) {
        $fid = (int) self::$_TFIELDMAP->get($fname);
        if ($fid !== 0) {
          $ftype = self::$_TSPEC[$fid]['type'];
        }
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == \TType::LST) {
            $_size1 = 0;
            $_val0 = Vector {};
            $_etype4 = 0;
            $xfer += $input->readListBegin(&$_etype4, &$_size1);
            for ($_i5 = 0; $_size1 === null || $_i5 < $_size1; ++$_i5)
            {
              if ($_size1 === null && !$input->readListHasNext()) {
                break;
              }
              $_size8 = 0;
              $_val7 = Map {};
              $_ktype9 = 0;
              $_vtype10 = 0;
              $xfer += $input->readMapBegin(
                inout $_ktype9,
                inout $_vtype10,
                inout $_size8,
              );
              for ($_i12 = 0; $_size8 === null || $_i12 < $_size8; ++$_i12)
              {
                if ($_size8 === null && !$input->readMapHasNext()) {
                  break;
                }
                $key13 = null;
                $xfer += $input->readI16(&$key13);
                $val14 = null;
                $xfer += $input->readFloat(&$val14);
                if ($key13 !== null && $val14 !== null) {
                  $_val7[$key13] = $val14;
                }
              }
              $xfer += $input->readMapEnd();
              $elem6 = $_val7;
              if ($elem6 !== null) {
                $_val0 []= $elem6;
              }
            }
            $xfer += $input->readListEnd();
            $this->lst = $_val0;
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == \TType::MAP) {
            $_size16 = 0;
            $_val15 = Map {};
            $_ktype17 = 0;
            $_vtype18 = 0;
            $xfer += $input->readMapBegin(
              inout $_ktype17,
              inout $_vtype18,
              inout $_size16,
            );
            for ($_i20 = 0; $_size16 === null || $_i20 < $_size16; ++$_i20)
            {
              if ($_size16 === null && !$input->readMapHasNext()) {
                break;
              }
              $key21 = null;
              $xfer += $input->readI16(&$key21);
              $_size24 = 0;
              $_val23 = Map {};
              $_ktype25 = 0;
              $_vtype26 = 0;
              $xfer += $input->readMapBegin(
                inout $_ktype25,
                inout $_vtype26,
                inout $_size24,
              );
              for ($_i28 = 0; $_size24 === null || $_i28 < $_size24; ++$_i28)
              {
                if ($_size24 === null && !$input->readMapHasNext()) {
                  break;
                }
                $key29 = null;
                $xfer += $input->readI16(&$key29);
                $val30 = null;
                $xfer += $input->readFloat(&$val30);
                if ($key29 !== null && $val30 !== null) {
                  $_val23[$key29] = $val30;
                }
              }
              $xfer += $input->readMapEnd();
              $val22 = $_val23;
              if ($key21 !== null && $val22 !== null) {
                $_val15[$key21] = $val22;
              }
            }
            $xfer += $input->readMapEnd();
            $this->mp = $_val15;
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == \TType::SET) {
            $_size32 = 0;
            $_etype35 = 0;
            $_val31 = Set{};
            $xfer += $input->readSetBegin(&$_etype35, &$_size32);
            for ($_i36 = 0; $_size32 === null || $_i36 < $_size32; ++$_i36)
            {
              if ($_size32 === null && !$input->readSetHasNext()) {
                break;
              }
              $_size39 = 0;
              $_val38 = Map {};
              $_ktype40 = 0;
              $_vtype41 = 0;
              $xfer += $input->readMapBegin(
                inout $_ktype40,
                inout $_vtype41,
                inout $_size39,
              );
              for ($_i43 = 0; $_size39 === null || $_i43 < $_size39; ++$_i43)
              {
                if ($_size39 === null && !$input->readMapHasNext()) {
                  break;
                }
                $key44 = null;
                $xfer += $input->readI16(&$key44);
                $val45 = null;
                $xfer += $input->readFloat(&$val45);
                if ($key44 !== null && $val45 !== null) {
                  $_val38[$key44] = $val45;
                }
              }
              $xfer += $input->readMapEnd();
              $elem37 = $_val38;
              if ($elem37 !== null) {
                $_val31->add($elem37);
              }
            }
            $xfer += $input->readSetEnd();
            $this->s = $_val31;
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write(\TProtocol $output): int {
    $xfer = 0;
    $xfer += $output->writeStructBegin('NewStructureNested');
    if ($this->lst !== null) {
      $_val0 = $this->lst;
      if (!($_val0 is \HH\KeyedContainer<_, _>) && !(($_val0 is \Iterator<_> || $_val0 is \IteratorAggregate<_>) && $_val0 is \Countable)) {
        throw new \TProtocolException('Bad type in structure.', \TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('lst', \TType::LST, 1);
      $output->writeListBegin(\TType::MAP, C\count($_val0));
      if ($_val0 !== null)
      {
        foreach ($_val0 as $iter1)
        {
          $output->writeMapBegin(\TType::I16, \TType::FLOAT, C\count($iter1));
          if ($iter1 !== null)
          {
            foreach ($iter1 as $kiter2 => $viter3)
            {
              $xfer += $output->writeI16($kiter2);
              $xfer += $output->writeFloat($viter3);
            }
          }
          $output->writeMapEnd();
        }
      }
      $output->writeListEnd();
      $xfer += $output->writeFieldEnd();
    }
    if ($this->mp !== null) {
      $_val4 = $this->mp;
      if (!($_val4 is \HH\KeyedContainer<_, _>) && !(($_val4 is \Iterator<_> || $_val4 is \IteratorAggregate<_>) && $_val4 is \Countable)) {
        throw new \TProtocolException('Bad type in structure.', \TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('mp', \TType::MAP, 2);
      $output->writeMapBegin(\TType::I16, \TType::MAP, C\count($_val4));
      if ($_val4 !== null)
      {
        foreach ($_val4 as $kiter5 => $viter6)
        {
          $xfer += $output->writeI16($kiter5);
          $output->writeMapBegin(\TType::I16, \TType::FLOAT, C\count($viter6));
          if ($viter6 !== null)
          {
            foreach ($viter6 as $kiter7 => $viter8)
            {
              $xfer += $output->writeI16($kiter7);
              $xfer += $output->writeFloat($viter8);
            }
          }
          $output->writeMapEnd();
        }
      }
      $output->writeMapEnd();
      $xfer += $output->writeFieldEnd();
    }
    if ($this->s !== null) {
      $_val9 = $this->s;
      if (!($_val9 is Set<_>)) {
        throw new \TProtocolException('Bad type in structure.', \TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('s', \TType::SET, 3);
      $output->writeSetBegin(\TType::MAP, C\count($_val9));
      if ($_val9 !== null)
      {
        foreach ($_val9 as $iter10)
        {
          $output->writeMapBegin(\TType::I16, \TType::FLOAT, C\count($iter10));
          if ($iter10 !== null)
          {
            foreach ($iter10 as $kiter11 => $viter12)
            {
              $xfer += $output->writeI16($kiter11);
              $xfer += $output->writeFloat($viter12);
            }
          }
          $output->writeMapEnd();
        }
      }
      $output->writeSetEnd();
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Original thrift struct:-
 * NewStructureNestedField
 */
class NewStructureNestedField implements \IThriftStruct {
  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'f',
      'type' => \TType::STRUCT,
      'class' => 'NewStructureNested',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'f' => 1,
  };
  const int STRUCTURAL_ID = 7541599830125884607;
  /**
   * Original thrift field:-
   * 1: struct forward_compatibility.NewStructureNested f
   */
  public ?NewStructureNested $f;

  public function __construct(?NewStructureNested $f = null  ) {
    $this->f = $f;
  }

  public function getName(): string {
    return 'NewStructureNestedField';
  }

  public function read(\TProtocol $input): int {
    $xfer = 0;
    $fname = '';
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin(inout $fname);
    while (true)
    {
      $xfer += $input->readFieldBegin(inout $fname, inout $ftype, inout $fid);
      if ($ftype == \TType::STOP) {
        break;
      }
      if (!$fid && $fname !== null) {
        $fid = (int) self::$_TFIELDMAP->get($fname);
        if ($fid !== 0) {
          $ftype = self::$_TSPEC[$fid]['type'];
        }
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == \TType::STRUCT) {
            $this->f = new NewStructureNested();
            $xfer += $this->f->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write(\TProtocol $output): int {
    $xfer = 0;
    $xfer += $output->writeStructBegin('NewStructureNestedField');
    if ($this->f !== null) {
      $_val0 = $this->f;
      if (!($_val0 instanceof NewStructureNested)) {
        throw new \TProtocolException('Bad type in structure.', \TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('f', \TType::STRUCT, 1);
      $xfer += $_val0->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

