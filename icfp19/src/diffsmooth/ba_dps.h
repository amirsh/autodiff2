#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_array_number_t ba_dps(storage_t st, array_number_t cam, array_number_t xs, index_t n) {
  number_t x3838 = (cam->arr[0]);
  number_t x3839 = (cam->arr[1]);
  number_t x3840 = (cam->arr[2]);
  number_t x3841 = (x3838) * (x3838);
  number_t x3842 = (x3839) * (x3839);
  number_t x3843 = (x3841) + (x3842);
  number_t x3844 = (x3840) * (x3840);
  number_t x3845 = (x3843) + (x3844);
  number_t x3846 = sqrt(x3845);
  number_t x3847 = (1) / (x3846);
  number_t x3848 = (x3839) * (x3847);
  number_t x3849 = (x3840) * (x3847);
  number_t x3850 = (x3838) * (x3847);
  number_t x3851 = cos(x3846);
  number_t x3852 = (1) - (x3851);
  number_t x3853 = (cam->arr[9]);
  number_t x3854 = (cam->arr[10]);
  number_t x3855 = (cam->arr[6]);
  number_t x3856 = sin(x3846);
  index_t x3857 = (cam)->length;
  number_t x3875 = (x3847) * (0.5);
  number_t x3878 = (x3846) * (x3846);
  number_t x3889 = -(x3856);
  number_t x3895 = (cam->arr[5]);
  number_t x3901 = (cam->arr[4]);
  number_t x3906 = (cam->arr[3]);
  array_array_array_number_t x4218 = (array_array_array_number_t)st;
  for(int i = 0; i < x4218->length; i++){
    index_t x3858 = (i) == (0);
    index_t x3859;
    if (x3858) {
      x3859 = 1;
    } else {
      x3859 = 0;
    }
    index_t x3860 = (i) == (1);
    index_t x3861;
    if (x3860) {
      x3861 = 1;
    } else {
      x3861 = 0;
    }
    index_t x3862 = (i) == (2);
    index_t x3863;
    if (x3862) {
      x3863 = 1;
    } else {
      x3863 = 0;
    }
    number_t x3864 = (x3859) * (x3838);
    number_t x3865 = (x3838) * (x3859);
    number_t x3866 = (x3864) + (x3865);
    number_t x3867 = (x3861) * (x3839);
    number_t x3868 = (x3839) * (x3861);
    number_t x3869 = (x3867) + (x3868);
    number_t x3870 = (x3866) + (x3869);
    number_t x3871 = (x3863) * (x3840);
    number_t x3872 = (x3840) * (x3863);
    number_t x3873 = (x3871) + (x3872);
    number_t x3874 = (x3870) + (x3873);
    number_t x3876 = (x3874) * (x3875);
    number_t x3877 = -(x3876);
    number_t x3879 = (x3877) / (x3878);
    number_t x3880 = (x3861) * (x3847);
    number_t x3881 = (x3839) * (x3879);
    number_t x3882 = (x3880) + (x3881);
    number_t x3883 = (x3863) * (x3847);
    number_t x3884 = (x3840) * (x3879);
    number_t x3885 = (x3883) + (x3884);
    number_t x3886 = (x3859) * (x3847);
    number_t x3887 = (x3838) * (x3879);
    number_t x3888 = (x3886) + (x3887);
    number_t x3890 = (x3876) * (x3889);
    index_t x3897 = (i) == (5);
    index_t x3898;
    if (x3897) {
      x3898 = -1;
    } else {
      x3898 = 0;
    }
    index_t x3903 = (i) == (4);
    index_t x3904;
    if (x3903) {
      x3904 = -1;
    } else {
      x3904 = 0;
    }
    index_t x3908 = (i) == (3);
    index_t x3909;
    if (x3908) {
      x3909 = -1;
    } else {
      x3909 = 0;
    }
    index_t x4129 = (i) == (9);
    index_t x4161 = (i) == (10);
    number_t x3925 = (x3848) * (x3898);
    index_t x4207 = (i) == (6);
    number_t x3928 = (x3849) * (x3904);
    number_t x3936 = (x3849) * (x3909);
    number_t x3939 = (x3850) * (x3898);
    number_t x3947 = (x3850) * (x3904);
    number_t x3950 = (x3848) * (x3909);
    number_t x4058 = (x3876) * (x3851);
    array_array_number_t x4217 = (array_array_number_t)x4218->arr[i];
    for(int i0 = 0; i0 < x4217->length; i0++){
      index_t x3891 = (3) * (i0);
      index_t x3892 = (11) + (x3891);
      index_t x3893 = (2) + (x3892);
      number_t x3894 = (xs->arr[x3893]);
      number_t x3896 = (x3894) - (x3895);
      index_t x3899 = (1) + (x3892);
      number_t x3900 = (xs->arr[x3899]);
      number_t x3902 = (x3900) - (x3901);
      number_t x3905 = (xs->arr[x3892]);
      number_t x3907 = (x3905) - (x3906);
      number_t x3910 = (x3850) * (x3907);
      number_t x3911 = (x3848) * (x3902);
      number_t x3912 = (x3910) + (x3911);
      number_t x3913 = (x3849) * (x3896);
      number_t x3914 = (x3912) + (x3913);
      number_t x3915 = (x3914) * (x3852);
      number_t x3921 = (x3848) * (x3896);
      number_t x3922 = (x3849) * (x3902);
      number_t x3923 = (x3921) - (x3922);
      number_t x3924 = (x3882) * (x3896);
      number_t x3926 = (x3924) + (x3925);
      number_t x3927 = (x3885) * (x3902);
      number_t x3929 = (x3927) + (x3928);
      number_t x3930 = (x3926) - (x3929);
      tuple_number_t_number_t x3931 = (tuple_number_t_number_t){._1=x3923, ._2=x3930};
      number_t x3932 = (x3849) * (x3907);
      number_t x3933 = (x3850) * (x3896);
      number_t x3934 = (x3932) - (x3933);
      number_t x3935 = (x3885) * (x3907);
      number_t x3937 = (x3935) + (x3936);
      number_t x3938 = (x3888) * (x3896);
      number_t x3940 = (x3938) + (x3939);
      number_t x3941 = (x3937) - (x3940);
      tuple_number_t_number_t x3942 = (tuple_number_t_number_t){._1=x3934, ._2=x3941};
      number_t x3943 = (x3850) * (x3902);
      number_t x3944 = (x3848) * (x3907);
      number_t x3945 = (x3943) - (x3944);
      number_t x3946 = (x3888) * (x3902);
      number_t x3948 = (x3946) + (x3947);
      number_t x3949 = (x3882) * (x3907);
      number_t x3951 = (x3949) + (x3950);
      number_t x3952 = (x3948) - (x3951);
      tuple_number_t_number_t x3953 = (tuple_number_t_number_t){._1=x3945, ._2=x3952};
      array_tuple_number_t_number_t x3954 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x3954->length=3;x3954->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x3954->arr[0] = x3931;
      x3954->arr[1] = x3942;
      x3954->arr[2] = x3953;
      array_tuple_number_t_number_t x4085 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x4085->length=3;x4085->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x2981 = 0; x2981 < x4085->length; x2981++){
        index_t x3916 = (x2981) + (3);
        index_t x3917 = (x2981) + (x3892);
        number_t x3918 = (xs->arr[x3917]);
        number_t x3919 = (cam->arr[x3916]);
        number_t x3920 = (x3918) - (x3919);
        tuple_number_t_number_t x3955 = (x3954->arr[x2981]);
        number_t x3956 = (x3955)._1;
        number_t x3957 = (cam->arr[x2981]);
        number_t x3958 = (x3957) * (x3847);
        number_t x3959 = (x3920) * (x3851);
        number_t x3960 = (x3956) * (x3856);
        number_t x3961 = (x3959) + (x3960);
        number_t x3962 = (x3958) * (x3915);
        number_t x3963 = (x3961) + (x3962);
        index_t x3964 = (i) == (x3916);
        index_t x4026 = (i) == (x2981);
        number_t x4055 = (x3920) * (x3890);
        number_t x4056 = (x3955)._2;
        number_t x4057 = (x4056) * (x3856);
        number_t x4059 = (x3956) * (x4058);
        number_t x4060 = (x4057) + (x4059);
        number_t x4083;
        if (x3964) {
          number_t x3996 = (-1) * (x3851);
          number_t x3998 = (x3996) + (x4055);
          number_t x4004 = (x3998) + (x4060);
          number_t x4005 = (x3957) * (x3879);
          number_t x4025;
          if (x4026) {
            number_t x3976 = (x3847) + (x4005);
            number_t x3977 = (x3976) * (x3915);
            number_t x3978 = (x3888) * (x3907);
            number_t x3979 = (x3850) * (x3909);
            number_t x3980 = (x3978) + (x3979);
            number_t x3981 = (x3882) * (x3902);
            number_t x3982 = (x3848) * (x3904);
            number_t x3983 = (x3981) + (x3982);
            number_t x3984 = (x3980) + (x3983);
            number_t x3985 = (x3885) * (x3896);
            number_t x3986 = (x3849) * (x3898);
            number_t x3987 = (x3985) + (x3986);
            number_t x3988 = (x3984) + (x3987);
            number_t x3989 = (x3988) * (x3852);
            number_t x3990 = -(x3890);
            number_t x3991 = (x3914) * (x3990);
            number_t x3992 = (x3989) + (x3991);
            number_t x3993 = (x3958) * (x3992);
            number_t x3994 = (x3977) + (x3993);
            number_t x3995 = (x4004) + (x3994);
            x4025 = x3995;
          } else {
            number_t x4006 = (x4005) * (x3915);
            number_t x4007 = (x3888) * (x3907);
            number_t x4008 = (x3850) * (x3909);
            number_t x4009 = (x4007) + (x4008);
            number_t x4010 = (x3882) * (x3902);
            number_t x4011 = (x3848) * (x3904);
            number_t x4012 = (x4010) + (x4011);
            number_t x4013 = (x4009) + (x4012);
            number_t x4014 = (x3885) * (x3896);
            number_t x4015 = (x3849) * (x3898);
            number_t x4016 = (x4014) + (x4015);
            number_t x4017 = (x4013) + (x4016);
            number_t x4018 = (x4017) * (x3852);
            number_t x4019 = -(x3890);
            number_t x4020 = (x3914) * (x4019);
            number_t x4021 = (x4018) + (x4020);
            number_t x4022 = (x3958) * (x4021);
            number_t x4023 = (x4006) + (x4022);
            number_t x4024 = (x4004) + (x4023);
            x4025 = x4024;
          }
          x4083 = x4025;
        } else {
          number_t x4061 = (x4055) + (x4060);
          number_t x4062 = (x3957) * (x3879);
          number_t x4082;
          if (x4026) {
            number_t x4035 = (x3847) + (x4062);
            number_t x4036 = (x4035) * (x3915);
            number_t x4037 = (x3888) * (x3907);
            number_t x4038 = (x3850) * (x3909);
            number_t x4039 = (x4037) + (x4038);
            number_t x4040 = (x3882) * (x3902);
            number_t x4041 = (x3848) * (x3904);
            number_t x4042 = (x4040) + (x4041);
            number_t x4043 = (x4039) + (x4042);
            number_t x4044 = (x3885) * (x3896);
            number_t x4045 = (x3849) * (x3898);
            number_t x4046 = (x4044) + (x4045);
            number_t x4047 = (x4043) + (x4046);
            number_t x4048 = (x4047) * (x3852);
            number_t x4049 = -(x3890);
            number_t x4050 = (x3914) * (x4049);
            number_t x4051 = (x4048) + (x4050);
            number_t x4052 = (x3958) * (x4051);
            number_t x4053 = (x4036) + (x4052);
            number_t x4054 = (x4061) + (x4053);
            x4082 = x4054;
          } else {
            number_t x4063 = (x4062) * (x3915);
            number_t x4064 = (x3888) * (x3907);
            number_t x4065 = (x3850) * (x3909);
            number_t x4066 = (x4064) + (x4065);
            number_t x4067 = (x3882) * (x3902);
            number_t x4068 = (x3848) * (x3904);
            number_t x4069 = (x4067) + (x4068);
            number_t x4070 = (x4066) + (x4069);
            number_t x4071 = (x3885) * (x3896);
            number_t x4072 = (x3849) * (x3898);
            number_t x4073 = (x4071) + (x4072);
            number_t x4074 = (x4070) + (x4073);
            number_t x4075 = (x4074) * (x3852);
            number_t x4076 = -(x3890);
            number_t x4077 = (x3914) * (x4076);
            number_t x4078 = (x4075) + (x4077);
            number_t x4079 = (x3958) * (x4078);
            number_t x4080 = (x4063) + (x4079);
            number_t x4081 = (x4061) + (x4080);
            x4082 = x4081;
          }
          x4083 = x4082;
        }
        tuple_number_t_number_t x4084 = (tuple_number_t_number_t){._1=x3963, ._2=x4083};
        x4085->arr[x2981] = x4084;
        
      }
      array_tuple_number_t_number_t x4086 = x4085;
      tuple_number_t_number_t x4087 = (x4086->arr[2]);
      number_t x4088 = (x4087)._1;
      tuple_number_t_number_t x4089 = (x4086->arr[0]);
      number_t x4090 = (x4089)._1;
      number_t x4091 = (1) / (x4088);
      number_t x4092 = (x4087)._2;
      number_t x4093 = -(x4092);
      number_t x4094 = (x4088) * (x4088);
      number_t x4095 = (x4093) / (x4094);
      number_t x4096 = (x4090) * (x4091);
      number_t x4097 = (x4089)._2;
      number_t x4098 = (x4097) * (x4091);
      number_t x4099 = (x4090) * (x4095);
      number_t x4100 = (x4098) + (x4099);
      tuple_number_t_number_t x4101 = (x4086->arr[1]);
      number_t x4102 = (x4101)._1;
      number_t x4103 = (x4102) * (x4091);
      number_t x4104 = (x4101)._2;
      number_t x4105 = (x4104) * (x4091);
      number_t x4106 = (x4102) * (x4095);
      number_t x4107 = (x4105) + (x4106);
      number_t x4108 = (x4096) * (x4096);
      number_t x4109 = (x4103) * (x4103);
      number_t x4110 = (x4108) + (x4109);
      number_t x4111 = (x4100) * (x4096);
      number_t x4112 = (x4096) * (x4100);
      number_t x4113 = (x4111) + (x4112);
      number_t x4114 = (x4107) * (x4103);
      number_t x4115 = (x4103) * (x4107);
      number_t x4116 = (x4114) + (x4115);
      number_t x4117 = (x4113) + (x4116);
      number_t x4118 = (x3854) * (x4110);
      number_t x4119 = (x3853) * (x4110);
      number_t x4120 = (1) + (x4119);
      number_t x4121 = (x4118) * (x4110);
      number_t x4122 = (x4120) + (x4121);
      number_t x4181 = (x3853) * (x4117);
      number_t x4182 = (x3854) * (x4117);
      array_tuple_number_t_number_t x4192 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x4192->length=2;x4192->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x2703 = 0; x2703 < x4192->length; x2703++){
        tuple_number_t_number_t x4125 = (x4086->arr[x2703]);
        number_t x4126 = (x4125)._1;
        number_t x4127 = (x4126) * (x4091);
        number_t x4128 = (x4127) * (x4122);
        number_t x4176 = (x4125)._2;
        number_t x4177 = (x4176) * (x4091);
        number_t x4178 = (x4126) * (x4095);
        number_t x4179 = (x4177) + (x4178);
        number_t x4180 = (x4179) * (x4122);
        number_t x4190;
        if (x4129) {
          number_t x4152 = (x4110) + (x4181);
          number_t x4160;
          if (x4161) {
            number_t x4139 = (x4110) + (x4182);
            number_t x4140 = (x4139) * (x4110);
            number_t x4141 = (x4118) * (x4117);
            number_t x4142 = (x4140) + (x4141);
            number_t x4143 = (x4152) + (x4142);
            number_t x4144 = (x4127) * (x4143);
            number_t x4145 = (x4180) + (x4144);
            x4160 = x4145;
          } else {
            number_t x4154 = (x4182) * (x4110);
            number_t x4155 = (x4118) * (x4117);
            number_t x4156 = (x4154) + (x4155);
            number_t x4157 = (x4152) + (x4156);
            number_t x4158 = (x4127) * (x4157);
            number_t x4159 = (x4180) + (x4158);
            x4160 = x4159;
          }
          x4190 = x4160;
        } else {
          number_t x4189;
          if (x4161) {
            number_t x4169 = (x4110) + (x4182);
            number_t x4170 = (x4169) * (x4110);
            number_t x4171 = (x4118) * (x4117);
            number_t x4172 = (x4170) + (x4171);
            number_t x4173 = (x4181) + (x4172);
            number_t x4174 = (x4127) * (x4173);
            number_t x4175 = (x4180) + (x4174);
            x4189 = x4175;
          } else {
            number_t x4183 = (x4182) * (x4110);
            number_t x4184 = (x4118) * (x4117);
            number_t x4185 = (x4183) + (x4184);
            number_t x4186 = (x4181) + (x4185);
            number_t x4187 = (x4127) * (x4186);
            number_t x4188 = (x4180) + (x4187);
            x4189 = x4188;
          }
          x4190 = x4189;
        }
        tuple_number_t_number_t x4191 = (tuple_number_t_number_t){._1=x4128, ._2=x4190};
        x4192->arr[x2703] = x4191;
        
      }
      array_tuple_number_t_number_t x4193 = x4192;
      array_number_t x4216 = (array_number_t)x4217->arr[i0];
      for(int i00 = 0; i00 < x4216->length; i00++){
        tuple_number_t_number_t x4194 = (x4193->arr[i00]);
        index_t x4195 = (i00) + (7);
        index_t x4196 = (i) == (x4195);
        number_t x4212 = (x4194)._2;
        number_t x4213 = (x4212) * (x3855);
        number_t x4215;
        if (x4196) {
          number_t x4206;
          if (x4207) {
            number_t x4200 = (x4194)._1;
            number_t x4201 = (x4213) + (x4200);
            number_t x4202 = (1) + (x4201);
            x4206 = x4202;
          } else {
            number_t x4205 = (1) + (x4213);
            x4206 = x4205;
          }
          x4215 = x4206;
        } else {
          number_t x4214;
          if (x4207) {
            number_t x4210 = (x4194)._1;
            number_t x4211 = (x4213) + (x4210);
            x4214 = x4211;
          } else {
            x4214 = x4213;
          }
          x4215 = x4214;
        }
        x4216->arr[i00] = x4215;
        
      }
      // x4217->arr[i0] = x4216;
      
    }
    // x4218->arr[i] = x4217;
    
  }
  return x4218;
}

