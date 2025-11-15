import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';

import { IonicModule } from '@ionic/angular';

import { Exercise1Page2PageRoutingModule } from './exercise1-page2-routing.module';

import { Exercise1Page2Page } from './exercise1-page2.page';

@NgModule({
  imports: [
    CommonModule,
    FormsModule,
    IonicModule,
    Exercise1Page2PageRoutingModule
  ],
  declarations: [Exercise1Page2Page]
})
export class Exercise1Page2PageModule {}
